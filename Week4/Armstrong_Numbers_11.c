#include <stdio.h>
int main(){
  int t,i,d;
  scanf("%d",&t);
  for(i=1;i<=t;i++)
  { int a,b,j;
    scanf("%d %d\n",&a,&b);
    for(j=a;j<=b;j++)
    { 
      int i,c=0,arm=0;
      i=j;
      while(i!=0){
        i/=10;
        c++;
      }
      i=j;
      while(i!=0){
          d=i%10;
        arm=arm+pow(d,c);
        i=i/10;
      }
      i=j;
      if(i==arm){
        printf("%d ",arm);
      }
    } printf("\n");
  }
    return 0;
}