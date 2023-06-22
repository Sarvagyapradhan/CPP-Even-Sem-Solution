#include <stdio.h>
int main() {
   int i,j,a[100][100],b[100][100];
   for(i=0;i<3;i++)
   for(j=0;j<3;j++)
   scanf("%d",&a[i][j]);
   for(i=0;i<3;i++)
   for(j=0;j<3,b[i][j]=a[j][i];j++);
   for(i=0;i<3;i++)
   for(j=0;j<3;j++)
   printf("%d ",b[i][j]);
   return 0;
}