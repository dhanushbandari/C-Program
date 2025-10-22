#include<stdio.h>

int sum(int n){     // declaring and defining the function
    if (n == 1){
        return 1;   
    }else{
        // n + sum(n-1) i.e if we enter 5 then it will be 5 + sum(5-1) 
        // for factorial it will be n*factorial(n-1)
        return n+sum(n-1);  // recursive call  
    }
}
//main function 
int main(){
    int num;
    printf("Enter the number to get add :-"); //user input
    scanf("%d",&num);
    printf("The sum is :- %d",sum(num)); // calling the function
    return 0;
}