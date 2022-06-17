/*
Problem 1.
input : This is test
output:
This 
Is
Test
*/
#include <stdio.h>
#include <string.h>
int main()
{
    char k[1000], m[100];
    gets(k);
    int i, j, lengt, started;

    started = 0;
    lengt = strlen(k);

    for (i = 0, j = 0; i < lengt; i++)
    {
     if (k[i] >= 'a' && k[i] <= 'z')
        {
            if (started == 0)
            {
                started = 1;
                m[j] = 'A' + k[i] - 'a';
                j++;
            }
            else
            {
                m[j] = k[i];
                j++;
            }
        }

        else if (k[i] >= 'A' && k[i] <= 'Z')
        {
            if (started == 0)
            {
                started = 1;
            }
            m[j] = k[i];
            j++;
        }
   
        else if (m[i] >= '0' && m[i] <= '9')
        {
            if (started == 0)
            {
                started = 1;
            }

            m[j] = k[i];
            j++;
        }

        else{
            started = 0;
            m[j] = '\0';
            printf("%s\n", m);
            j = 0;
        }
    }

    printf("%s\n",m);
}

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
Problem 3. Write a program in C to make such a pattern like right angle triangle with a number which will repeat a number in a row. Go to the editor

The pattern like :

 1
 22
 333
 4444
*/

#include <stdint.h>
int main()
{
    int i, j, rows;

    printf("Enter your number :");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++)
    {
        for (j = 1; i <= i; j++)
        {
            printf("%d", i);
        }
    }
}
/*
Problem 3. Write a C Programe to find avarage temp and minimum and maximum temp of the month of day
*/
#include <stdio.h>
int main()
{
    int temp[31], i, avrg, min, max;

    int days;

    printf("Enter your days : ");
    scanf("%d", &days);

    // initial Days
    for (i = 0; i < days; i++)
    {
        printf("Day %d", i + 1);
        scanf("%d", &temp[i]);
    }
    // find avrage temp

    avrg = 0;

    for (i = 0; i < days; i++)
        avrg += temp[i];

    printf("Avrage temp of month %d\n ", avrg / days);

    // minimum and maximum temp of day

    min = temp[0];
    max = temp[0];

    for (i = 0; i < days; i++)
    {
        if (temp[i] < min)
            min = temp[i];

        if (temp[i] > max)
            max = temp[i];
    }

    printf("Maximum Temp of month %d\n Minimum temp of month %d", max, min);
}