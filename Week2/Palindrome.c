#include <stdio.h>
int main() {
int n1,n2,c=0,r1,r2,r,d;
    scanf("%d",&n1);
    scanf("%d",&n2);
    while(n1>=10)
    {
        while(n2>=10)
        {
            r1=n2*n1;
            r=r1;
            r2=0;
            while(r1!=0)
            {
                d=r1%10;
                r2=r2*10+d;
                r1=r1/10;
            }
            if(r2==r)
            {
                printf("%d",r);c=1;break;
            }
            n2--;
        }
        n1--;
    }
    if(c==0)
    {
        printf("Not a valid state");
    }
return 0;
}