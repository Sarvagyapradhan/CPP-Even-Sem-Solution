#include <stdio.h>
int main() {
    int t,j;
    long long int a,b,f1,f2,c=0,p=0;
    scanf("%d",&t);
    for(j=0;j<t;j++)
    {
        scanf("%lld %lld", &a,&b);
        f1=1;f2=2;
        for(c=0;f1<b;f2=f2+p)
        {
            if(f1>a)c++;
            p=f1; f1=f2;
        }
        printf("%lld\n",c);
    }
    return 0;
}