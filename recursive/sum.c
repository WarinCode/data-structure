#include <stdio.h>

int sum(int n);

int main(){
    int number;
    printf("Enter a number of sum:");
    scanf("%d", &number);
    printf("summation of %d = %d", number, sum(number));
    return 0;
}

int sum(int n){
    return n == 0 ? 0 : n + sum(n - 1);
}