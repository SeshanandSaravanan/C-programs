#include <stdio.h>

int max_subarray_sum(int nums[], int length) {
    int max_sum = nums[0];  
    int current_sum = nums[0];  

    for (int i = 1; i < length; ++i) {
        
        current_sum = (current_sum + nums[i] > nums[i]) ? current_sum + nums[i] : nums[i];

        
        max_sum = (current_sum > max_sum) ? current_sum : max_sum;
    }

    return max_sum;
}

int main() {
    int length;

    printf("Enter the length of the array: ");
    scanf("%d", &length);

    int nums[length];

    printf("Enter the elements of the array: ");
	for (int i = 0; i < length; ++i) {
        scanf("%d", &nums[i]);
    }

    int result = max_subarray_sum(nums, length);

    printf("Maximum subarray sum: %d\n", result);

    return 0;
}
