#include <stdio.h>

int isDivisible(int ,int);

int main() {
    int a, b;
    printf("Enter the divided: ");
    scanf("%d", &a);
    printf("Enter a non-zero divisor: ");
    scanf("%d", &b);
    if (b == 0){
        printf("Divisor cannot be zero");
    }
    else {
        isDivisible(a, b);
    }

    return 0;
}

int isDivisible(int value1, int value2){
    if (value1 % value2 == 0){
        printf("Divisible.");
        return 1;
    }
    else {
        printf("Not divisible.");
        return 0;
    }
}