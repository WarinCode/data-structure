#include <stdio.h>

int Cal(int n){
    if(n == 0) return 0;
    else if(n == 1) return 1;
    else if(n % 2 == 0) return n + Cal(n-2);
    else return n + Cal(n-1);
};

int main() {
    int n = 6;
    printf("%d = %d", n, Cal(n));
    return 0;
}
