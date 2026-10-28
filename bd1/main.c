#include <stdio.h>

int digitSum(int number) {
    int sum = 0;
    while (number > 0) {
        sum += number % 10;
        number /= 10;
    }
    return sum;
}

int main(void) {
    int n, i, temp, reverse;
    int a, b, c, sa, sb, sc, largest;

    printf("NUMBER MAGIC TABLE\n");

    do {
        printf("Enter n (1-1000000): ");
        if (scanf("%d", &n) != 1) {
            printf("Invalid input. Please enter an integer.\n");
            return 1;
        }
        if (n < 1 || n > 1000000) {
            printf("Invalid. Enter n (1-1000000).\n");
        }
    } while (n < 1 || n > 1000000);

    printf("\nMultiplication table:\n");
    for (i = 1; i <= 10; i++) {
        printf("%8d x %2d = %10d\n", n, i, n * i);
    }

    if (n % 2 == 0 && n > 0) {
        printf("Even number.\n");
    } else {
        printf("Odd number.\n");
    }

    printf("Digit sum: %d\n", digitSum(n));

    temp = n;
    reverse = 0;
    while (temp > 0) {
        reverse = reverse * 10 + temp % 10;
        temp /= 10;
    }
    printf("Reversed number: %d\n", reverse);

    do {
        printf("\nEnter three positive numbers (a b c): ");
        if (scanf("%d %d %d", &a, &b, &c) != 3) {
            printf("Invalid input. Please enter three integers.\n");
            return 1;
        }
        if (a <= 0 || b <= 0 || c <= 0) {
            printf("Invalid. Enter three positive numbers.\n");
        }
    } while (a <= 0 || b <= 0 || c <= 0);

    sa = digitSum(a);
    sb = digitSum(b);
    sc = digitSum(c);
    printf("Digit sums: a=%d, b=%d, c=%d\n", sa, sb, sc);

    if (sa >= sb && sa >= sc) {
        largest = a;
    } else if (sb >= sa && sb >= sc) {
        largest = b;
    } else {
        largest = c;
    }

    printf("Number with largest digit sum: %d\n", largest);
    return 0;
}
