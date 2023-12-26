package exercise;
import java.util.Scanner;
public class DisplayZ {
public static void main(String[] args) {
Scanner scanner = new Scanner(System.in);
System.out.println("Enter String : ");
String s = scanner.next();
int n = s.length();
int a, b;
boolean f = n % 3 == 1;
if (f) {
for (a = 0; a <= n / 3; a++) {
for (b = 0; b <= n / 3; b++) {
System.out.print((a == 0 || a == n / 3 || (a + b == n / 3) ? s.charAt(a + a + b) : ' '));
}
System.out.println();
}
} 
else {
System.out.println("no");
}
}
}