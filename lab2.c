// wap count the total nu,ber of digits in the number 

#include<stdio.h>
#include<math.h>

int main(){

    int n; 

    printf("Enter a number ");
    scanf("%d", &n);

    int res = log10(n) + 1;

    printf("Total number of digits: %d", res);

    return 0;
    
}