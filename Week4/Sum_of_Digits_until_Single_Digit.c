#include <stdio.h>
int main() {
    int n,r,sum=0,sum1=0;
    scanf("%d",&n);
    while (n>0) {
        r=n%10;
        sum=sum+r;
        n=n/10;
    }
    if (sum <10) {
       printf("%d",sum);
    }
    else 
    {
        while (sum>0) {
        r=sum%10;
        sum1=sum1+r;
        sum=sum/10;
    } 
    printf("%d", sum1);}
    return 0;
}