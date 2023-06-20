#include <math.h>
#include <stdio.h>
int main() {
    int n,n1,a,s[100],c=0,t=0,sum=0,i;
    scanf("%d",&n);
    n1=n;
    for(;n1>0;n1/=2)
        c++;
    for(i=c-1;i>=0;i--)
    {
        a=n%2;
        s[i]=(a==1)?0:1;
        n/=2;
    }
    for(i=c-1;i>=0;i--)
    {
        sum=sum+(s[i]*pow(2,t));
        t++;
    }
    printf("%d",sum);
    return 0;
}