#include <stdio.h>
int main() {

int T,n,i,j,c=0,sum=0;
    scanf("%d",&T);
    while(T>0)
    {
        sum=0;
        scanf("%d",&n);
        for(i=2;i<=n;i++)
        {
            c=0;
            for(j=1;j<=i;j++)
            {
                if(i%j==0)
                {
                    c++;
                }}
            if (c==2)
            {
                sum=sum+i;
            }
        }
    printf("%d\n",sum);
    T--;
    }
    return 0;
}