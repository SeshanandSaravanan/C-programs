import java.util.*;
public class Contructors
{
public Main()
{
System.out.println("Default constructor");
}
public Main(String name ,int rollno)
{
System.out.println(name+" "+rollno);
}
public static void main(String[] args)
{
Scanner scan = new Scanner(System.in);
String name ;
int rollno;
System.out.println("Enter Name :");
name = scan.nextLine();
System.out.println("Enter Rollno:");
rollno = scan.nextInt();
Main defaultcons = new Main();
Main parametercons = new Main(name,rollno);
}
}