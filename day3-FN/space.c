#include <stdio.h>
#include <stdlib.h>

void plusOne(int digits[], int digitsSize) {
    int carry = 1;
    for (int i = digitsSize - 1; i >= 0; i--) {
        int sum = digits[i] + carry;
        if (sum >= 10) {
            digits[i] = sum % 10;
            carry = 1;
        } else {
            digits[i] = sum;
            carry = 0;
            break; 
        }
    }
    
    if (carry == 1) {
        printf("Output: 1 ");
        for (int i = 0; i < digitsSize; i++) {
            printf("%d ", digits[i]);
        }
    } else {
        printf("Output: ");
        for (int i = 0; i < digitsSize; i++) {
            printf("%d ", digits[i]);
        }
    }
}

int main() {
    int size1;
	printf("Enter the size of the array: ");
    scanf("%d", &size1);

    int arr1[size1];
    printf("Enter the digits separated by space: ");
    for (int i = 0; i < size1; i++) {
        scanf("%d", &arr1[i]);
    }

    plusOne(arr1, size1);

    return 0;
}
