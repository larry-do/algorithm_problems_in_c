//ma trận xoắn ốc
#include<stdio.h>
#define MAX 100
int main()
{
    int a[MAX][MAX],n;
    int hang_tang,cot_tang,hang_giam,cot_giam;
    int i,j,row,col;
    int chi_so;
    scanf("%d",&n);
    chi_so=1;
    hang_tang=cot_tang=n-1;
    hang_giam=cot_giam=0;
    row=col=0;
    for(i=1;i<=n*n;i++)
    {
        a[row][col]=i;
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
                    cot_giam++;
                    chi_so=1;
                    col++;
                }
            }
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
