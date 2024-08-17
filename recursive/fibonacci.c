#include <stdio.h>

int fibonacci(int n);

int main(){
    int number;
    printf("Enter a number:");
    scanf("%d", &number);
    if(number < 0){
        puts("The number can't be a negative number!");
        return 1;
    }
    printf("Fibonacci of %d = %d\n", number, fibonacci(number));
    return 0;
}

int fibonacci(int n){
    return n < 2 ? n : fibonacci(n - 1) + fibonacci(n - 2);
}