#include<stdio.h>
#include<math.h>

void pow(int n);

int main(){
    int n;
    printf("enter a no :  ");
    scanf("%d",&n);
    pow(n);
    return 0;
}

void pow(int n){
    int p=pow(n,4);
    printf("number to the power 4 : %d",p);
}