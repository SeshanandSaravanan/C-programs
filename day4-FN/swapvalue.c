#include <stdio.h>

void swap_by_Value(int a, int b) 
{
    printf("\nBefore swapping (inside Function): num1 = %d, num2 = %d\n", a, b);
    int temp = a;
    a = b;
    b = temp;
    printf("\nAfter swapping (inside Function): num1 = %d, num2 = %d\n", a, b);
}

int main() {
    int num1 = 5, num2 = 10;
    printf("\nBefore swapping (outside Function): num1 = %d, num2 = %d\n", num1, num2);
    swap_by_Value(num1, num2);
    printf("\nAfter swapping (outside Function): num1 = %d, num2 = %d\n", num1, num2);
    return 0;
}

