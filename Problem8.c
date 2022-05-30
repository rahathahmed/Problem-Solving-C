/*Write a program in C to make such a pattern like right angle triangle with number increased by 1. Go to the editor

The pattern like :
   1
   2 3
   4 5 6
   7 8 9 10
*/

#include <stdio.h>
int main(){
    int a , b,c=1,n=5;

    for(a = 1; a <= n ; a++){
        for(b = 1 ; b <= a ; b++){
            printf("%d",c++);
        }
        printf("\n");
    }
}