#include <stdio.h>
int main() {
int t,a1,a2,e,j,d,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d %d",&a1,&a2);
        if(a1>a2)
        {
            e=a1;
        }
        else{
            e=a2;
        }
        for(j=1;j<e;j++)
        {
            if(a1%j==0 && a2%j==0)
            {
                d=j;
            }
        }
            printf("%d\n",d);
    }
    return 0;
}