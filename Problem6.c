/*
Problem : Write a program in C to display the pattern like right angle triangle with a number.Go to the editor
The pattern like :
1 
12 
123 
1234
*/

#include <stdio.h>
int main(){
    int i ,j,rows;

    printf("Enter Your Number :");
    scanf("%d",&rows);

    for(i = 1; i <= rows ; i++){
        for(j = 1; j <= i ; j++){
            printf("%d",j);
        }
        printf("\n");
    }
}
