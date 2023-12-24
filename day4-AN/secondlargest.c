#include <stdio.h>

int main() {
    int N,i,largest,secondLargest;
    int Arr[100];
    printf("Enter the size of the array: ");
    scanf("%d", &N);

    if (N < 2) {
        printf("Array should have at least two elements.\n");
        return 0;
    }

    
    printf("Enter the elements of the array:\n");
    for (i = 0; i < N; i++) {
        scanf("%d", &Arr[i]);
    }

    largest = Arr[0];
    secondLargest = Arr[0];

    for (i = 1; i < N; i++) {
        if (Arr[i] > largest) {
            secondLargest = largest;
            largest = Arr[i];
        } else if (Arr[i] != largest && (Arr[i] > secondLargest || secondLargest == largest)) {
            secondLargest = Arr[i];
        }
    }

    printf("Second Largest Element: %d\n", secondLargest);

    return 0;
}

