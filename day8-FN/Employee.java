// Parent Class
class Member {
    String name;
    int age;
    String phoneNumber;
    String address;
    double salary;

    // Constructor
    Member(String name, int age, String phoneNumber, String address, double salary) {
        this.name = name;
        this.age = age;
        this.phoneNumber = phoneNumber;
        this.address = address;
        this.salary = salary;
    }

    // Method to print the salary
    void printSalary() {
        System.out.println("Salary: $" + salary);
    }
}

// Employee Class inheriting from Member
class Employee extends Member {
    String specialization;

    // Constructor
    Employee(String name, int age, String phoneNumber, String address, double salary, String specialization) {
        super(name, age, phoneNumber, address, salary);
        this.specialization = specialization;
    }

    // Overriding printSalary method to include specialization
    @Override
    void printSalary() {
        System.out.println("Employee: " + name);
        System.out.println("Specialization: " + specialization);
        super.printSalary();
    }
}

// Manager Class inheriting from Member
class Manager extends Member {
    String department;

    // Constructor
    Manager(String name, int age, String phoneNumber, String address, double salary, String department) {
        super(name, age, phoneNumber, address, salary);
        this.department = department;
    }

    // Overriding printSalary method to include department
    @Override
    void printSalary() {
        System.out.println("Manager: " + name);
        System.out.println("Department: " + department);
        super.printSalary();
    }
}

public class Main {
    public static void main(String[] args) {
        // Creating an Employee object
        Employee emp = new Employee("John Doe", 28, "1234567890", "123 Street, City", 50000, "Software Engineer");

        // Creating a Manager object
        Manager mgr = new Manager("Jane Smith", 35, "0987654321", "456 Avenue, Town", 80000, "HR");

        // Printing details
        System.out.println("Employee Details:");
        emp.printSalary();
        System.out.println("\nManager Details:");
        mgr.printSalary();
    }
}