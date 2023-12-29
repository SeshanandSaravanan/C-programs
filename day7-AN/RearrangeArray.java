import java.util.*;
public class RearrangeArray {
public static void rearrangeArray(int[] nums) {
if (nums == null || nums.length <= 1) {
return;
}
int n = nums.length;
for (int i = 0; i < n - 1; i++) {
for (int j = i + 1; j < n; j++) {
if (nums[i] >= 0 && nums[j] < 0) {
int temp = nums[i];
nums[i] = nums[j];
nums[j] = temp;
}
}
}
}
public static void main(String[] args) {
int[] nums = {-12, 11, -13, -5, 6, -7, 5, -3, -6};
System.out.println("Original array: " + Arrays.toString(nums));
rearrangeArray(nums);
System.out.println("Rearranged array: " + Arrays.toString(nums));
}
}