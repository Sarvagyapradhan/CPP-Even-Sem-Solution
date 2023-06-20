#include <stdio.h>
int main() {
int T,i,n,result,fact=1,r;
    scanf("%d",&T);
    while(T>0)
    {
       scanf("%d",&n);
       fact=1;
        for(i=1;i<=n;i++)
        {
            fact=fact*i;
        }
        result=0;
        while(fact>0)
        {
        r=fact%10;
        result=result+r;
        fact=fact/10;}
        T--;
        printf("%d\n",result);}
    return 0;
}