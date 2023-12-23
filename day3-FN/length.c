#include <stdio.h>
#include <stdlib.h>

int can_jump(int nums[], int length) {
    int max_reach = 0;

    for (int i = 0; i < length; ++i) {
       
        if (i > max_reach) {
            return 0; // False
        }

        
        max_reach = (max_reach > i + nums[i]) ? max_reach : i + nums[i];

        
        if (max_reach >= length - 1) {
            return 1; // True
        }
    }

    return 0; // False
}

int main() {
 int length;

    printf("Enter the length of the array: ");
    scanf("%d", &length);

    int *nums = (int *)malloc(length * sizeof(int));

    printf("Enter the elements of the array: ");
    for (int i = 0; i < length; ++i) {
        scanf("%d", &nums[i]);
    }

    int result = can_jump(nums, length);

    if (result) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    
    free(nums);

    return 0;
}
