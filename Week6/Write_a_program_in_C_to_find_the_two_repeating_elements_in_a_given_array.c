#include <stdio.h>
int main(){
    int c,n,i,j;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        c=0;
        for(j=0;j<n;j++){
            if (i!=j){
                if (a[i]==a[j]){
                    c++;
                }
            }
        } if (c!=0){
            printf("%d ",a[i]);
        }   
    }
    return 0;
}