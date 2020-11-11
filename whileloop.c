#include <stdio.h>
int main() {
    int n, i, sum = 0;
    printf("Enter an integer: ");
    scanf("%d", &n);
    i = 1;

    while (i <= n) {
        sum += i;
        i++;
    }

    printf("Sum = %d\n", sum);
    return 0;
}
