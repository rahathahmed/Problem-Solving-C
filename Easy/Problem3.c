/*
3. Write a program in C to display n terms of natural number and their sum.Go to the editor
Test Data : 7
Expected Output :
The first 7 natural number is :
1 2 3 4 5 6 7
*/

#include <stdio.h>
int main()
{
    int i, n = 7;

    for (i = n; i >= 1; i--)
        printf("%d\n", i);
}
