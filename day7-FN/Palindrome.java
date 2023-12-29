public class Palindrome {
public Main(int number, String message) {
System.out.println("Number " + number + " is " + message);
}
public static boolean isPalindrome(int number) {
String numStr = Integer.toString(number);
String reversedNumStr = new StringBuilder(numStr).reverse().toString();
return numStr.equals(reversedNumStr);
}
public static boolean isPrime(int number) {
if (number <= 1) {
return false;
}
for (int i = 2; i <= Math.sqrt(number); i++) {
if (number % i == 0) {
return false;
}
}
return true;
}
public static void main(String[] args) {
int[] numbers = {1, 34543, 565, 727, 10099};
for (int number : numbers) {
boolean isPalindrome = isPalindrome(number);
boolean isPrime = isPrime(number);
if (isPalindrome && isPrime)
{
new Main(number, "PalPrime");
}
else if (isPalindrome)
{
new Main(number, "Palindrome");
}
else if (isPrime)
{
new Main(number, "Prime");
}
}
}
}