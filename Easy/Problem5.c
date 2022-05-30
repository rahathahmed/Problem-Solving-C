/*
6. Write a program in C to display the multiplication table of a given integer. Go to the editor
Test Data :
Input the number (Table to be calculated) : 15
Expected Output :
15 X 1 = 15
15 X 2 = 30
15 X 10 = 150
*/

#include <stdio.h>
int main(){
    int i,n = 2;

    for( i = 1; i <= 10 ; i++)
    printf("%d X %d = %d\n", n,i,n*i);

}