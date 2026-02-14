#include<stdio.h>
int main() {
    int a[2][2],i,j;
    printf("Enter elements:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("Enter elements [%d][%d]: ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("2 x 2 matrix is:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d",a[i][j]);
        }
    }
return 0;
}
