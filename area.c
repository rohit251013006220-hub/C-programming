#include<stdio.h>


void square(int a);
void circle(int r);
void rectangle(int x,int y);


int main(){
    
    square(0);
    circle(0);
    rectangle(0,0);
    return 0;
}
void square(int a){
    printf("enter the side : ");
    scanf("%d",&a);
    int area=a*a;
    printf("area of the square : %d \n",area);

}

void circle(int r){
    printf("enter the radius : ");
    scanf("%d",&r);
    float area2=3.14*r*r;
    printf("area of the circle : %f \n",area2);

}
void rectangle(int x,int y){
    printf("enter the length : ");
    scanf("%d",&x);
    printf("enter the breadth : " );
    scanf("%d",&y);
    int area3=x*y;
    printf("area of the rectangle : %d",area3);

}