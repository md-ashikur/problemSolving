#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {

        int n;
        scanf("%d", &n);
        char s[n];
        scanf("%s", s);
        int countT = 0;
        int countP = 0;
        for(int i=0; i<strlen(s); i++){
           if(s[i] == 'T' ){
            countT++;
           }
           else if(s[i] == 'P' ){
            countP++;
           }
        }
       
if(countT>countP){
    printf("Tiger\n");
   
}
 else if(countP>countT){
    printf("Pathaan\n");
 }
 else{
    printf("Draw\n");
 }
        
    }

    return 0;
}