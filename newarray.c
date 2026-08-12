#include<stdio.h>

void printarray(int arr[],int n);
void reversearray(int arr[],int n);



int main(){
    int arr[]={1,2,3,4,5,6,7};
    reversearray(arr,7);
    printarray(arr,7);
    return 0;

}
void reversearray(int arr[],int n){
    for(int i=0;i<n/2;i++){
        int firstval=arr[i];
        int secondval=arr[n-i-1];
        arr[i]=secondval;
        arr[n-i-1]=firstval; 
    }


}


void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
}