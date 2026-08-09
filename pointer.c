#include<stdio.h>

int main(){
    int age =25;
    int *d=&age;
    // int *ptr=&age;

    printf("%p \n",d);
    printf("%u",&d);
    return 0;
}