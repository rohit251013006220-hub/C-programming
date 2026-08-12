#include<stdio.h>
void alpha(char *a,char *b);

int main(){
    char x='A',y='Z';
    alpha(&x,&y);

    return 0;
}

void alpha(char *a,char *b){
    for(char i=*a;i<=*b;i++){
        printf("%c \n",i);
    }
}