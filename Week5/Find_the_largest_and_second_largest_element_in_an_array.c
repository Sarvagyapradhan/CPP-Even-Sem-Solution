#include <stdio.h>
int main() {
    int a[6],i,j,t;
    for(i=0;i<6;i++)
    scanf("%d",&a[i]);
    for(i=0;i<5;i++)
    for(j=0;j<5-i;j++)
    if(a[j]>a[j+1]){
        t=a[j];
        a[j]=a[j+1];
        a[j+1]=t;
    }
    printf("%d\n%d",a[5],a[4]);
    return 0;
}