#include <stdio.h>
int main() {
    int a,b,c,count=0,i;
    scanf("%d %d %d",&a,&b,&c);
    for(i=a;i<=b;i++)
    {
        if(i%c==0)
            count++;
    }
    printf("%d",count);  
    return 0;
}