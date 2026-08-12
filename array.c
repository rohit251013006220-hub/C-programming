#include<stdio.h>
int main(){
    char age=22;
    char *ptr=&age;
    printf("ptr = %u\n",ptr);
    ptr++;
    printf("ptr = %u\n",ptr);
    ptr--;
    printf("ptr = %u\n",ptr);;
    return 0;

}