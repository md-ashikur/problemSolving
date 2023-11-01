#include <stdio.h>
#include <string.h>
int main(){

    char S[1001], T[1001];
    scanf("%s %s", S, T);
    int slen = strlen(S);
    int tlen = strlen(T);
printf("%d %d\n", slen, tlen);
printf("%s %s\n", S, T);

return 0;
}