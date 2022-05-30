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

/*
Problem 2 : Write a c programe to print reverse piramide depent on n .
Output :
****
***
**
*
*/

#include <stdio.h>
int main()
{
    int i, j, rows = 6;
    for (i = rows; i >= 1; i--)
    {
        for (j = i; j >= 1; j--)
        {
            printf("*");
        }
        printf("\n");
    }
}

/*
Problem 3 : Write a program in C to display the cube of the number upto given an integer.Go to the editor
    Test Data : Input number of terms : 5
    Expected Output :
    Number is : 1 and cube of the 1 is : 1
    Number is : 2 and cube of the 2 is : 8
    Number is : 3 and cube of the 3 is : 27
    Number is : 4 and cube of the 4 is : 64
    Number is : 5 and cube of the 5 is : 125
*/

#include <stdio.h>
int main()
{
    int i, n;

    printf("Enter your number :");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        printf("Number is : %d and cube of the %d os : %d\n", i, i, i * i * i);
    }
}

/*
Problem 4 : Write a program in C to display the n terms of odd natural number and their sum . Go to the editor
Test Data
Input number of terms : 10
Expected Output :
The odd numbers are :1 3 5 7 9 11 13 15 17 19
The Sum of odd Natural Number upto 10 terms : 100
*/

#include <stdio.h>

int main()
{

    int i, n, sum = 0;

    printf("Enter your number : ");
    scanf("%d", &n);

    for (i = 1; i <= n * 2; i++)
    {
        if (i % 2 == 1)
        {
            sum += i;
            printf("The odd number are :%d\n", i);
        }
    }
    printf("The sum of odd Natural Number Upto %d terms :%d\n", n, sum);
}

/*
Problem 5 : Write a program in C to display the pattern like right angle triangle with a number.Go to the editor
The pattern like :
1
12
123
1234
*/

#include <stdio.h>
int main()
{
    int i, j, rows = 6;

    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
}

/*Problem 6 : Write a program in C to make such a pattern like right angle triangle with number increased by 1. Go to the editor

The pattern like :
   1
   2 3
   4 5 6
   7 8 9 10
*/

#include <stdio.h>
int main()
{
    int a, b, c = 1, n = 5;

    for (a = 1; a <= n; a++)
    {
        for (b = 1; b <= a; b++)
        {
            printf("%d", c++);
        }
        printf("\n");
    }
}

/* Problem 7 : Find Length Your String : 
Input :Rahath 
Output : Your length is 5
*/

#include <stdio.h>
int str_length(char str[])
{
    int i, length = 0;
    for (i = 0; str[i] != '\0'; i++)
        length++;
    return length;
}

int main()
{
    char country[100];
    int length;
    printf("Enter your string :");
    while (1 == scanf("%s", &country))
    {
        length = str_length(country);
        printf("%d\n", length);
    }
}

/*
Problem 7 : Write the C Programe to string .
Input : this is test
Output : 
this
is 
test
*/

#include <stdio.h>
#include <string.h>
int main()
{

    char s[1000], word[100];

    int i, j, length, is_started_word;
    gets(s);
    length = strlen(s);
    is_started_word = 0;

    for (i = 0, j = 0; i < length; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            if (is_started_word == 0)
            {
                is_started_word = 1;
                word[j] = 'A' + s[i] - 'a';
                j++;
            }
            else
            {
                word[j] = s[i];
                j++;
            }
        }

        else if (s[i] >= 'A' && s[i] <= 'Z')
        {
            if (is_started_word == 0)
            {
                is_started_word = 1;
            }
            word[j] = s[i];
            j++;
        }

        else if (s[i] >= '0' && s[i] <= '9')
        {
            if (is_started_word == 0)
            {
                is_started_word = 1;
            }
            word[j] = s[i];
            j++;
        }

        else
        {
            if (is_started_word == 1)
            {
                is_started_word = 0;
                word[j] = '\0';
                printf("%s\n", word);
                j = 0;
            }
        }
    }
    printf("%s\n", word);
}