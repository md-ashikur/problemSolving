#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int s=6+(n-1)/2;
    int k =0;
    for (int i = 0; i < 6+(n-1)/2; i ++) {
        
        for (int j = 1; j < s; j++) {
            printf(" ");
        }
        
        for (int j = 0; j <= k; j++) {
            printf("*");
        }
        s--;
        k = k + 2;
        
        printf("\n");
    }
    
  
    for (int i = 1; i <= 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf(" ");
        }
         for (int j = 1; j <=n; j++) {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}
