#include <bits/stdc++.h>
#define Loop(i, s, f) for(int i = s; i <= f; i++)
int main(){
	char email[] = "@ptit.edu.vn\0";
	char s[1000];
	char vec[100][100];
	fgets(s, 1000, stdin);
	Loop(i, 0, strlen(s)-1) s[i] = tolower(s[i]);
	char *p = strtok(s, " ");
	int k = 0;
	while(p != NULL){
		if(p[strlen(p)-1] == '\n') p[strlen(p)-1] = '\0';
		if(strlen(p) > 0) strcpy(vec[k++], p);
		p = strtok(NULL, " ");
	}
	printf("%s", vec[k-1]);
	Loop(i, 0, k-2) printf("%c", vec[i][0]);
	printf("%s", email);
	return 0;
}
