#include <stdio.h>
int main() {
    long int n,i,r1;
    scanf("%ld",&n);
    long int a[n],sum[n];
    for(i=0;i<n;i++)
    scanf("%ld",&a[i]);
    for(i=0;i<n;i++){
        r1=a[i]%10;
    while(a[i]>=10){
    a[i]=a[i]/10;}
    sum[i]=r1+a[i];
    }
    for(i=0;i<n;i++)
    printf("%ld\n",sum[i]);
    return 0;
}