//còn tiêu chuẩn chuẩn hóa nào nữa thì report mình
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define MAX 10000
void strInsert(char a[],char b[],int n);
void main(){
    FILE *in_file=NULL,*out_file=NULL;
    in_file=fopen("input.txt","r");
    if(in_file==NULL){
        printf("%s","Can't not open file input.txt.");
        return;
    }
    char s[MAX];
    fgets(s,MAX,in_file);
    //loại bỏ các dấu cách liền nhau và loại bỏ dấu cách trước dấu câu
    char *p=strchr(s,' ');
    while(p!=NULL){
        if(!(isalpha(*(p+1))||isdigit(*(p+1)))){ //nếu kề nó không phải alpha cũng ko phải digit
            strcpy(p,p+1); // xóa nó
            p--;
        }
        p=strchr(p+1,' ');
    }
    //Thêm đấu cách vào trước dấu câu đồng thời viết hoa chữ cái sau dấu câu // chưa biết cách gộp mấy dấu vào 1 @@
    //Đợi t nghĩ cách gộp vào
    p=NULL;
    p=strchr(s,'.');
    while(p!=NULL){
        if(*(p+1)!=' ') strInsert(s," ",p-s+1);
        *(p+2)=toupper(*(p+2));
        p=strchr(p+1,'.');
    }
    p=NULL;
    p=strchr(s,'!');
    while(p!=NULL){
        if(*(p+1)!=' ') strInsert(s," ",p-s+1);
        *(p+2)=toupper(*(p+2));
        p=strchr(p+1,'!');
    }
    p=NULL;
    p=strchr(s,'?');
    while(p!=NULL){
        if(*(p+1)!=' ') strInsert(s," ",p-s+1);
        *(p+2)=toupper(*(p+2));
        p=strchr(p+1,'?');
    }
    //loại bỏ dấu cách đầu//còn mỗi một dấu cách thôi do xử lý trên kia rồi
    if(s[0]==' ') strcpy(s,s+1);
    //nếu kí tự cuối là dấu cách thì xóa đi
    if(s[strlen(s)-1]==' ') s[strlen(s)-1]='\0';
    //viết hoa chữ cái đầu
    s[0]=toupper(s[0]);
    puts(s);
    out_file=fopen("output.txt","a+");
    fputs(s,out_file);
    fclose(in_file);
    fclose(out_file);
    return;
}
void strInsert(char a[],char b[],int n)
{
    char c[MAX];
    if(n>strlen(a))
        n=strlen(a);
    strncpy(c,a,n);
    c[n]='\0';
    strcat(c,b);
    strcat(c,a+n);
    strcpy(a,c);
}