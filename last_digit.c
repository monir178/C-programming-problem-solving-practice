#include<stdio.h>
int main(){
    int A;
scanf("%d", &A);
    int last_two_digit = A % 100;
    printf("%d\n", last_two_digit);
    if(last_two_digit % 2 == 0) {
        printf("EVEN");
    } else {
        printf("ODD");
    }
    return 0;
}