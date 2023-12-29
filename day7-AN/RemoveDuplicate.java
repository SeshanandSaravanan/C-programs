import java.util.Scanner;
public class RemoveDuplicate {
public static int removeDuplicates(int[] nums) {
if (nums == null || nums.length == 0) {
return 0;
}
int uniqueCount = 1;
int n = nums.length;
for (int i = 1; i < n; i++) {
if (nums[i] != nums[i - 1]) {
nums[uniqueCount] = nums[i];
uniqueCount++;
}
}
return uniqueCount;
}
public static void main(String[] args) {
Scanner scanner = new Scanner(System.in);
System.out.print("Enter the size of the array: ");
int size = scanner.nextInt();
int[] nums = new int[size];
System.out.println("Enter the sorted array elements:");
for (int i = 0; i < size; i++) {
nums[i] = scanner.nextInt();
}
scanner.close();
int uniqueCount = removeDuplicates(nums);
System.out.println("No. of unique elements = " + uniqueCount);
System.out.print("Modified array with unique elements: ");
for (int i = 0; i < uniqueCount; i++) {
System.out.print(nums[i] + " ");
}
}
}