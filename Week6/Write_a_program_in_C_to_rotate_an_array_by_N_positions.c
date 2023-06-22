#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int a[n],i,j,r,temp;
    scanf("%d",&r);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    printf("%d ",a[i]);
    printf("\n");
    for(i=0;i<r;i++){
    temp=a[n-1];
    for(j=n-1;j>0;j--)
    a[j] = a[j-1];
    a[0]=temp;}
    for(i=0;i<n;i++)
    printf("%d ",a[i]);
    return 0;
}