#include<stdio.h>
int main(){

    int a[101], b[101];

    for(int i=0; i<3; i++){
        scanf("%d ", &a[i]);

    }
    for (int i = 0; i < 3; i++) {
        scanf("%d ", &b[i]);
    }

    int aCount=0;
    int bCount=0;
    for(int i=0; i<3; i++){
      if(a[i]>b[i]){
        aCount++;
      }
      else if(a[i]<b[i]){
        bCount++;
      }
      

    }
    printf("%d %d\n", aCount, bCount);
return 0;
}