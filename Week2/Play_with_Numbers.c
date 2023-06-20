#include <stdio.h>
int main() {
int T,n;
    scanf("%d",&T);
    while(T>0)
    {
        scanf("%d",&n);
        if(n%11==0)
        {
            printf("%d\n",n+2);
        }
        else if(n%4==0)
        {
            printf("%d\n",n-2);
        }
        else
        {
            printf("%d\n",n*4);
        }
        T--;
    }
    return 0;
}