/*
8. Write a program in C to display the n terms of odd natural number and their sum . Go to the editor
Test Data
Input number of terms : 10
Expected Output :
The odd numbers are :1 3 5 7 9 11 13 15 17 19
The Sum of odd Natural Number upto 10 terms : 100
*/

#include <stdio.h>

int main(){

    int i, n ,sum = 0;

    printf("Enter your number : ");
    scanf("%d",&n);


    for(i = 1; i <= n * 2 ; i++)
    { 
        if(i % 2 == 1)
        {
            sum += i;
            printf("The odd number are :%d\n",i);
        }
    }
    printf("The sum of odd Natural Number Upto %d terms :%d\n",n,sum);
}