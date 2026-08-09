#include<stdio.h>

int main(){
    int s,e;
    printf("enter the starting no : ");
    scanf("%d",&s);
    printf("enter the ending no : ");
    scanf("%d",&e);
    for(int i=s,i<=e,i++){
        if(i%1==0 && i%i==0){
            printf("%d",i);
        }
    }




    return 0;

}