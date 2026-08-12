#include<stdio.h>

void reversearray(int arr[],int n);


int main(){
    int arr[]={1,2,3,4,5,6,7};
    reversearray(arr,7);
    return 0;

}
void countodd(int arr[],int n){
    for(int i=n;i>=0;i--){
        printf("reverse array : %d\n",arr[i]);
    }
}

