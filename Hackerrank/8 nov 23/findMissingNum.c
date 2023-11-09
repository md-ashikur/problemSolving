#include <stdio.h>

int main(){

int t;
scanf("%d",&t);
while (t--)
{
    long long int m;
    int a, b, c;
    scanf("%lld %d %d %d", &m, &a, &b, &c);
    long long int forthnum= m/(a*b*c);

    if(forthnum*a*b*c == m){
        
        printf("%lld \n", forthnum);
    }
    
    else {
        printf("-1 \n");
    }
}


    return 0;
}