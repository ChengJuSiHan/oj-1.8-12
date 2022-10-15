#include <stdio.h>
int main()
{
    int i,j,n,k1_=0,k1_1=0,k2_=0,k2_2=0,k3_=0,k3_3=0,q1=0,q2=0,q3=0,q4=0;
    char a[15][15]={0},b[15][15]={0},k1[15][15]={0},k2[15][15]={0},k3[15][15]={0};
    scanf("%d",&n);
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
        scanf("%s",&a[i][j]);
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
        scanf("%s",&b[i][j]);
    for(j=0,k1_=0;j<n;j++,k1_++)
        for(i=n-1,k1_1=0;i>=0;i--,k1_1++)
        k1[k1_][k1_1]=a[i][j];
    for(j=n-1,k2_=0;j>=0;j--,k2_++)
        for(i=0,k2_2=0;i<n;i++,k2_2++)
        k2[k2_][k2_2]=a[i][j];
    for(i=n-1,k3_=0;i>=0;i--,k3_++)
        for(j=n-1,k3_3=0;j>=0;j--,k3_3++)
        k3[k3_][k3_3]=a[i][j];
    for(i=0;i<n;i++)
        for(j=0;j<n;j++){
        if(b[i][j]==k1[i][j]) q1++;
        if(b[i][j]==k2[i][j]) q2++;
        if(b[i][j]==k3[i][j]) q3++;
        if(b[i][j]==a[i][j])  q4++;
        }
    if(q1==n*n) printf("1");
    else if(q2==n*n) printf("2");
    else if(q3==n*n) printf("3");
    else if(q4==n*n) printf("4");
    else printf("5");
}
