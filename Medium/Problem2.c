/*
Problem 2 : Write a c programe to print piramide reverse depent on n .
Output :
*****
****
***
**
*
*/


#include <stdio.h>
int main()
{
    int i, j, rows = 6;
    for(i = rows ; i >= 1 ; i--){
        for(j = i ; j >= 1 ; j--){
            printf("*");
        }
        printf("\n");
    }
}
