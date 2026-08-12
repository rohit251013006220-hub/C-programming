#include<stdio.h>

void countodd(int arr[],int n);


int main(){
    int arr[]={1,2,3,4,5,6,7};
    countodd(arr,7);
    return 0;

}
void countodd(int arr[],int n){
    int c=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2!=0){
            c++;
        }
    }
    printf("no of odd nos : %d",c);
}

