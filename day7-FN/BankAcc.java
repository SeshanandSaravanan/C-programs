public class BankAccount {
private int accountId;
private String name;
private double balance;
public BankAccount(int accountId, String name, double initialBalance) {
this.accountId = accountId;
this.name = name;
this.balance = initialBalance;
}
public void deposit(double amount) {
balance += amount;
}
public boolean withdraw(double amount) {
if (balance >= amount) {
balance -= amount;
return true;
} else {
System.out.println("Insufficient funds.");
return false;
}
}
public void printReceipt() {
System.out.println("Account ID: " + accountId);
System.out.println("Name: " + name);
System.out.println("Account Balance: Rs. " + balance);
System.out.println();
}
}
public class Main {
public static void main(String[] args) {
BankAccount accountA = new BankAccount(12344, "Account A", 5000);
BankAccount accountB = new BankAccount(56789, "Account B", 2500);
accountA.withdraw(1500);
accountB.deposit(1500);
accountA.printReceipt();
accountB.withdraw(3000);
accountA.deposit(3000);
accountA.printReceipt();
accountB.printReceipt();
}
}