#include<stdio.h>
#include<math.h>
 void sqr(int x){           //declaring and defining the function of Sqaure area
    printf("%d \n",x*x);
 }
  float circle(float y){   // declaring and defining the function of circle area
    return  3.14 *y*y;
 }
  void rect(int z,int w){  //  declaring and defining the function of rectangular area
    printf("%d \n",z*w);
 }

 // Temperature Converter function
 float Temp(float c){     // declaring and defining the function
   float f = c*(9.0/5.0)+32;  // conversion formula 
   return f;  

 }
 int main(){
    int x,z,w;
    float y;

    printf("Enter the side of the square :-");
    scanf("%d",&x);
    sqr(x); // calling the function

    printf("Enter the radius of the circle :-");
    scanf("%f",&y);
    printf("%f \n",circle(y)); // calling the function

    printf("Enter the length :-");
    scanf("%d",&z);
    printf("Enter the width :-");
    scanf("%d",&w);
    rect (z,w); // calling the function

    // Temperature converter
    float f,t; 
    printf("Enter the temeprature in celsuis :-");
    scanf("%f",&t);
    printf("The temperature is :- %f \n",Temp(t));
    return 0;
 }