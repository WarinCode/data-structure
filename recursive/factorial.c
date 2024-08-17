#include <stdio.h>

int factorial(int n);

int main(){
    int number;
    printf("Enter a number of factorial:");
    scanf("%d", &number);
    printf("%d! = %d", number, factorial(number));
    return 0;
}

int factorial(int n){
    return n == 0 ? 1 : n * factorial(n - 1);
}