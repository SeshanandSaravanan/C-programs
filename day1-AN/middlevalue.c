#include<stdio.h>
int main() {
    int x, y, z;

    printf("Enter the value of x: ");
    scanf("%d", &x);

    printf("Enter the value of y: ");
    scanf("%d", &y);

    printf("Enter the value of z: ");
    scanf("%d", &z);

    int middle;

    if ((x < y && y < z) || (z < y && y < x)) {
        middle = 2; // y
    } else if ((y < x && x < z) || (z < x && x < y)) {
        middle = 1; // x
    } else {
        middle = 3; // z
    }

    printf("%d is the middle value.\n", middle);

    return 0;
}
