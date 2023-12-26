package exercise;
import java.util.Scanner;
public class OddEvenArray {
public static String compressString(String str) {
StringBuilder compressed = new StringBuilder();
int count = 1;
char current = str.charAt(0);
for (int i = 1; i < str.length(); i++)
{
if (str.charAt(i) == current)
{
count++;
}
else
{
compressed.append(current);
if (count > 1)
{
compressed.append(count);
}
current = str.charAt(i);
count = 1;
}
}
compressed.append(current);
if (count > 1)
{
compressed.append(count);
}
return compressed.toString();
}
public static void main(String[] args) {
Scanner in = new Scanner(System.in);
System.out.println("Enter a string:");
String inputString = in.next();
String compressedString = compressString(inputString);
System.out.println("The compressed string is: " + compressedString);
}
}