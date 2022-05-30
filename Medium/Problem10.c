#include <stdio.h>
int main()
{
    char str1[] = "bangla";
    char str2[] = "desh";
    char str3[12];

    int i, j, lng1 = 6, lng2 = 4;

    for (i = 0, j = 0; i < lng1; i++, j++)
    {
        str3[j] = str1[i];         
    }
  
  
    for (i = 0;  i < lng2; i++,j++)
    {
        str3[j] = str2[i];
    }

    str3[j] = '\0';
    printf("%s\n", str3);
}