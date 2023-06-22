#include <stdio.h>
int main() {
    int a[6],i;  
    for(i=0;i<6;i++){
        scanf("%d",&a[i]);  }
    for (i=2;i<5;i++){
    a[i]=a[i+1];}
    for (i=0;i<5;i++){
        printf("%d ",a[i]);
    }
    return 0;
}