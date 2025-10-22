#include<stdio.h>
int main(){
// Largest of three numbers 
int a,b,c;
  printf("enter the 1st number :-");
  scanf("%d",&a);
  printf("enter the 2nd number :-");
  scanf("%d",&b);
  printf("enter the 3rd number :-");
  scanf("%d",&c);
  if (a>b && a>c){
    printf("a number is the greatest\n");
  } else if (b>a && b>c){
    printf(" b number is the greatest \n");
  }else if (c>a && c>b){
    printf(" c number is the greatest \n");
  }else {
    printf("all the numbers are equal \n");
  }
//Electricity bill counting
float units,total_bill,fpp,pg,tax;
printf("enter the number of units consumed :-");
scanf("%f",&units);
if(units > 0 ){
    units *= 5.8 ; // UNITS CONSUMED
    printf("the total bill is :- %f \n" ,units);
    fpp =units *0.45; // FUEL USED 
    pg= units *0.36; //POWER GENERATED 
    tax =(9.0/100+(units*0.18/100)); //TAX GST
    total_bill = units + fpp + pg +tax; //TOTAL BILL 
    printf("The finale bill is :- %f \n",total_bill);
}
else if (units < 0){
    printf("The Bill is 145Rs Per month \n");
    printf("The electricity bill is not more conusmed \n ");
}else{
    printf("The Bill is 145Rs Per month \n");
    printf("The electricity bill is not more conusmed \n ");  
}
printf("THANK YOU ");
return 0;
}