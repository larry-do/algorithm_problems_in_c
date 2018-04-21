#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define Loop(i, s, f) for(i = s; i <= f; i++)
typedef struct {
	char name[200];
	float a, b, c;
	int stt;
} sinhvien;
sinhvien sv[200];
int sv_sl = 0;
FILE *file;

int compare(const void *x,const void *y){
	float sum1 = ((sinhvien *)x)->a + ((sinhvien *)x)->b + ((sinhvien *)x)->c;
	float sum2 = ((sinhvien *)y)->a + ((sinhvien *)y)->b + ((sinhvien *)y)->c;
	if(sum1 > sum2) return -1;
	else return 1;
}
void getdata(){
	file = fopen("B16DCCN258.bin", "rb");
	sv_sl = 0;
	while(fread(&sv[sv_sl].stt, sizeof(sv[sv_sl].stt), 1, file) == 1 &&
			fread(sv[sv_sl].name, sizeof(sv[sv_sl].name), 1, file) == 1 &&
			fread(&sv[sv_sl].a, sizeof(sv[sv_sl].a), 1, file) == 1 &&
			fread(&sv[sv_sl].b, sizeof(sv[sv_sl].b), 1, file) == 1 &&
			fread(&sv[sv_sl].c, sizeof(sv[sv_sl].c), 1, file) == 1){
			sv_sl++;
	}
	fclose(file);
}
void add(){
	file = fopen("B16DCCN258.bin", "a+b");
	sinhvien s;
	fflush(stdin);
	fgets(s.name, 200, stdin);
	int i = strlen(s.name) - 1;
	while(s.name[i] != '\n') i--;
	if(i >= 0) s.name[i] = '\0';
	scanf("%f%f%f", &s.a, &s.b, &s.c);
	s.stt = ++sv_sl;
	fwrite(&s.stt, sizeof(int), 1, file);
	fwrite(s.name, sizeof(s.name), 1, file);
	fwrite(&s.a, sizeof(float), 1, file);
	fwrite(&s.b, sizeof(float), 1, file);
	fwrite(&s.c, sizeof(float), 1, file);
	fclose(file);
}
void show(){
	qsort(sv, sv_sl, sizeof(sinhvien), compare);
	int k = 0;
	Loop(k, 0, sv_sl - 1){
		printf("%d %s %.1f %.1f %.1f\n", sv[k].stt, sv[k].name, sv[k].a, sv[k].b, sv[k].c);
	}
}
void fix(int u){
	file = fopen("B16DCCN258.bin", "w+b");
	fflush(stdin);
	fgets(sv[u].name, 200, stdin);
	int i = strlen(sv[u].name) - 1;
	while(sv[u].name[i] != '\n') i--;
	if(i >= 0) sv[u].name[i] = '\0';
	scanf("%f%f%f", &sv[u].a, &sv[u].b, &sv[u].c);
	Loop(i, 0, sv_sl - 1){
		fwrite(&sv[i].stt, sizeof(int), 1, file);
		fwrite(sv[i].name, sizeof(sv[i].name), 1, file);
		fwrite(&sv[i].a, sizeof(float), 1, file);
		fwrite(&sv[i].b, sizeof(float), 1, file);
		fwrite(&sv[i].c, sizeof(float), 1, file);
	}
	fclose(file);
}
int main(){
	getdata();
	int choose; scanf("%d", &choose);
	if(choose == 1){
		int so; scanf("%d", &so);
		int i;
		Loop(i, 1, so){
			add();
		}
		printf("%d", so);
	}
	else if(choose == 3){
		show();
	}
	else if(choose == 2){
		int i; scanf("%d", &i);
		fix(i-1);
		printf("%d", i);
	}
	return 0;
}
