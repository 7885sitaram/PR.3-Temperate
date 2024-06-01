// wap to finf sum of first and the last digit of number 

#include<stdio.h>

int main(){

    int n ;

    printf("Enter any number ");
    scanf("%d", &n);

    int n1 = n % 10;
    int n2 = n / 100;

    printf("The sum of the first and last digit : %d", n1 + n2);

    return 0;




}