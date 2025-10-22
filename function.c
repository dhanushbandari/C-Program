#include<stdio.h>
//Defining and declaring the function
int sum (int a,int b){
    return a+b;
}

void table(int n){  // Paramter or formal parameter
    int i;
    for(i=1;i<=10;i++){
        printf("%d \n",i*n); 
    }
}
int main (){
    int a,b,s;
    printf("Enter the 1st number :-");
    scanf("%d",&a);
    printf("Enter the 2nd number :-");
    scanf("%d",&b);
    s =sum(a,b);
    printf("The total sum is :- %d \n",s);
    int n; 
    printf("Enter the number whose table you want :- ");
    scanf("%d",&n);
    table(n); //Agrument or actual parameter 
return 0;
}