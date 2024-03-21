#include <stdio.h>


int main() {
    int t;
    scanf("%d", &t);
    while(t--){
        float x,y,z;
        scanf("%f %f %f",&x,&y,&z);
        
        float alice = 400/x;
        float bob = 400/y;
        float charlie = 400/z;
        
       if(alice>bob && alice>charlie){
       printf("ALICE\n");
       }
       else if(bob>alice && bob>charlie){
          printf("BOB\n");
       }
       else{
          printf("CHARLIE\n");
       }
    }

}
