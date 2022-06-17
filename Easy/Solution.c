//First you try to solve self trying and open problem text file.If you are not capable to 3-4 hour trying then open this file.


/*
Write a C program to find the eligibility of admission for a professional course based on the following criteria:

Eligibility Criteria : Marks in Maths >=65 and Marks in Phy >=55 and Marks in Chem>=50 and Total in all three subject >=190 or Total in Maths and Physics >=140

Input the marks obtained in Physics :65
Input the marks obtained in Chemistry :51
Input the marks obtained in Mathematics :72
Total marks of Maths, Physics and Chemistry : 188 Total marks of Maths and Physics : 137 The candidate is not eligible.
Expected Output :
The candidate is not eligible for admission.
*/
#include <stdio.h>
int main()
{
    int maths, physics, chemist, total;

    printf("Enter Student Number : \n");
    printf("\n 1. Physics Marks :");
    scanf("%d", &physics);
    printf("\n 1. Chemistry Marks :");
    scanf("%d", &chemist);
    printf("\n 1. Mathematics Marks :");
    scanf("%d", &maths);

    total = maths + chemist + physics;

    if (maths >= 65 && physics >= 55 && total >= 190 && (maths + physics) >= 140)
    {
        printf("The candidate is eligible for admission.");
    }
    else
    {
        printf("The candidate is not eligible for admission.");
    }
}



/*
 Problem 1 : Write a program in C to display the first 10 natural numbers. 
 - Expected Output : 1 2 3 4 5 6 7 8 9 10;
*/

#include <stdio.h>
int main()
{
    int i;

    for (i = 1; i <= 10; i++)
    {
        printf("%d\n", i);
    }
}

/*
Problem 2 : 
Write a C program to find the sum of first 10 natural numbers.
Expected Output : The first 10 natural number is : 1 2 3 4 5 6 7 8 9 10 The Sum is : 55
*/

#include <stdio.h>
int main()
{
    int i, sum = 0;

    for (i = 1; i <= 10; i++)
    {
        sum = sum + i;
    }
    printf("%d", sum);
}

/*
Problem 3 : Write a program in C to display n terms of natural number and their sum.
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

/*
Problem 4 : Write a program in C to display the multiplication table of a given integer. 
Test Data :
Input the number (Table to be calculated) : 15
Expected Output :
15 X 1 = 15
15 X 2 = 30
15 X 10 = 150
*/

#include <stdio.h>
int main()
{
    int i, n = 2;

    for (i = 1; i <= 10; i++)
        printf("%d X %d = %d\n", n, i, n * i);
}

/*
Problem  5 : Write a program in C to display the multiplication table vertically from 1 to n.Go to the editor
Test Data : Input upto the table number starting from 1 : 8 Expected Output : Multiplication table from 1 to 8 1x1 = 1,
2x1 = 2, 3x1 = 3, 4x1 = 4, 5x1 = 5, 6x1 = 6, 7x1 = 7, 8x1 = 8 ... 1x10 = 10, 2x10 = 20, 3x10 = 30, 4x10 = 40, 5x10 = 50, 6x10 = 60, 7x10 = 70, 8x10 = 80

*/

#include <stdio.h>
int main()
{
    int i, n;

    for (n = 1; n <= 20; n++)
    {
        for (i = 1; i <= 10; i++)
            printf("%d X %d = %d\n ", n, i, i * n);
    }
}
