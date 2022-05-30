/*
11. Write a program in C to make such a pattern like right angle triangle with a number which will repeat a number in a row. Go to the editor

The pattern like :

 1
 22
 333
 4444
*/

#include <stdint.h>
int main(){
    int i,j,rows;
    
    printf("Enter your number :");
    scanf("%d",&rows);

    for(i = 1; i <= rows ; i++){
        for(j = 1; i <= i ; j++){
            printf("%d",i);
        }
    }
}