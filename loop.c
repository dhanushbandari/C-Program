#include<stdio.h>
int main(){
    int n,i;
    printf("Enter the sequence to be reversed \n");
    scanf("%d",&n);
    for ( i=n; i>=1; i--){
        printf("%d \n" ,i);
    }
    int j=1;
    printf("Enter the table you need :- ");
    scanf("%d \n ",&j);
    while (j<=10){
        printf("%d \n",j*i);
        j++;
    }
    return 0;
}