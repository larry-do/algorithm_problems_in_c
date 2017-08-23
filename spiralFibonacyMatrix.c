//matrix fibonacy xoan oc
#include<stdio.h>
#define MAX 100
int main()
{
    int a[MAX][MAX],n,fibo[1000];
    int i,j;
    int hang_tang,hang_giam,cot_tang,cot_giam;
    int row,col;
    int chi_so;
    scanf("%d",&n);
    hang_tang=cot_tang=n-1;
    hang_giam=cot_giam=0;
    row=col=0;
    chi_so=1;
    //tao ra mot mang chua cac so fibo truoc
    fibo[0]=1;
    fibo[1]=1;
    for(i=2;i<n*n;i++)
    {
        fibo[i]=fibo[i-1]+fibo[i-2];
    }
    //bat dau
    for(i=0;i<n*n;i++)
    {
        a[row][col]=fibo[i];
        switch(chi_so)
        {
        case 1:
            {
                if(col<cot_tang)
                    col++;
                else
                {
                    chi_so++;
                    hang_giam++;
                    row++;
                }
                break;
            }
        case 2:
            {
                if(row<hang_tang)
                    row++;
                else
                {
                    chi_so++;
                    cot_tang--;
                    col--;
                }
                break;
            }
        case 3:
            {
                if(col>cot_giam)
                    col--;
                else
                {
                    chi_so++;
                    hang_tang--;
                    row--;
                }
                break;
            }
        case 4:
            {
                if(row>hang_giam)
                    row--;
                else
                {
                    chi_so=1;
                    cot_giam++;
                    col++;
                }
                break;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            printf("%d ",a[i][j]);
        printf("\n");
    }
    return 0;
}
