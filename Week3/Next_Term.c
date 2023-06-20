#include <stdio.h>
int main() {
    int i,n,a=1;
    scanf("%d",&n);
    if(n==1)
        printf("%d",a);
    else{
        for(i=2;i<=n;i++)
            a+=i;
        printf("%d",a);
        }    
    return 0;
}