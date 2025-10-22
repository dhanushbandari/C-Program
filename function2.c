#include<stdio.h>
#include<math.h>
 void sqr(int x){
    printf("%d \n",x*x);
 }
  float circle(float y){
    return  3.14 *y*y;
 }
  void rect(int z,int w){
    printf("%d \n",z*w);
 }
 int main(){
    int x,z,w;
    float y;
    printf("Enter the side of the square :-");
    scanf("%d",&x);
    sqr(x);
    printf("Enter the radius of the circle :-");
    scanf("%f",&y);
    printf("%f \n",circle(y));
    printf("Enter the length :-");
    scanf("%d",&z);
    printf("Enter the width :-");
    scanf("%d",&w);
    rect (z,w);
    return 0;
 }