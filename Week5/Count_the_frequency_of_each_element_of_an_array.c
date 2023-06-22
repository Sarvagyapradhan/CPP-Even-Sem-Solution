#include <stdio.h>
int main(){
    int a[9],i,j,fr[9]={0};
    for(i=0;i<9;i++)
        scanf("%d",&a[i]);
    for(i=0;i<9;i++)
        for(j=0;j<9;j++)
            if (a[i]==a[j]) 
            fr[i]++;   
        for(i=0;i<9;i++){
        for(j=0;j<9;j++)
            if(i!=j) 
            if (a[i]==a[j]) a[j]=0;
            if(a[i]!=0) 
            printf("%d %d\n",a[i],fr[i]);}
            return 0;}