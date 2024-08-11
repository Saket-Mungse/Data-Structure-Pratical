#include <stdio.h>

int main() {
    int a[100], n, i, num, position, t;

    printf("Enter number of elements\n");
    scanf("%d", &n);

    printf("Enter %d integers\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < (n - 1); i++) {
        position = i;

        for (num = i + 1; num < n; num++) {
            if (a[position] > a[num]) {
                position = num;
            }
        }

        if (position != i) {
            t = a[i];
            a[i] = a[position];
            a[position] = t;
        }
    }

    printf("Sorted array:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}



































































