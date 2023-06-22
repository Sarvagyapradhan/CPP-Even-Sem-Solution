#include <stdio.h>
int main(){
    int a[100],c,i,j;
    for(i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++){
        c=0;
        for(j=0;j<10;j++){
            if (i!=j){
                if (a[i]==a[j]){
                    c++;
                }
            }
        } if (c==0){
            printf("%d ",a[i]);
        }   
    }
    return 0;
}
