#include<stdio.h>


void world(){
    printf("world start\n");
    printf("world end\n");
}

void hello(){
 printf("Hello start\n");
 world(); // waiting
 printf("Hello end\n");
}

int main(){

printf("main start\n");
hello(); // waiting 
printf("main end\n");

    return 0;
}