#include<stdio.h>
int main(){

    int n, k, i;
    scanf("%d %d",&n, &k);
    for(i=1; i<=n; i++){
        for(int j=1; j<=k; j++){
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}