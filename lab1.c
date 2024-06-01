// Q.1 Write a Program to print all alphabets from a to z by skipping 3 alphabets using do do-while loop.
#include<stdio.h>

int main(){
    int n = 97 , i;

    do
    {
       do
       {
        printf(" %c", n);
        n = n + 4 ;
       } while (n == 97);
       
    } while (n < 122 );
    

    return 0;
}