#include<stdio.h>

int fun(int i){

if(i==6) return 0;
    printf("%d\n", i);
    fun(i+1);

}

int main(){
    fun(1);
    return 0;
}

// recursive function controling