// intput 1  and print 5 to 1
#include <stdio.h>


int fun(int i){
    if(i==6){
        return 0;
    }
    fun(i+1);
    printf("%d\n",i);
}
int main(){

    fun(1);
    return 0;
}