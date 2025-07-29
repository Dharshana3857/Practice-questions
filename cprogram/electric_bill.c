#include <stdio.h>

int main() {
    int units;
    float bill = 0;
    printf("Enter total units consumed: ");
    scanf("%d", &units);
    if (units <= 50) {
        bill = units * 1.50;
    } else if (units <= 150) {
        bill = 50 * 1.50 + (units - 50) * 2.00;
    } else if (units <= 250) {
        bill = 50 * 1.50 + 100 * 2.00 + (units - 150) * 3.00;
    } else {
        bill = 50 * 1.50 + 100 * 2.00 + 100 * 3.00 + (units - 250) * 5.00;
    }

    printf("Electricity Bill = ₹%.2f\n", bill);

    return 0;
}

