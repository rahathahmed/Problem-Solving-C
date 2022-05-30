/*
Problem 1 : Write a c programe to print piramide depent on n .
Output :
*
**
***
****
*/
#include <stdio.h>
int main()
{
    int i, j, rows = 6;

    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}