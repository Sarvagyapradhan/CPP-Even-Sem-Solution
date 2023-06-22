#include<stdio.h>
int main() 
{
    int a[100][2],i,j,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d%d",&a[i][0],&a[i][1]);
    for(i=0;i<n;i++)
        if(a[i][0]!=0)
            for(j=0;j<n;j++)
                if(i!=j&&a[i][0]>=a[j][0]&&a[i][1]<=a[j][1])
                    a[i][0]=0;
    for(i=0;i<n;i++)
        if(a[i][0]!=0)
            printf("%d %d\n",a[i][0],a[i][1]);
    return 0;
}