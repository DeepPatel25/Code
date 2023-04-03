// import bank.*;
/*

class Pen {
    String color;
    String type;

    public void write () {
        System.out.println("Writing Something");
    }

    public void printColor() {
        System.out.println(this.color);
    }
}

*/

/*
class Student {
    String name;
    int age;

    public void printInfo() {
        System.out.println(this.name);
        System.out.println(this.age);
    }

    // Student (String name, int age) {
    //     this.name = name;
    //     this.age = age;
    // }

    // Student (Student s2) {
    //     this.name = s2.name;
    //     this.age = s2.age;
    // }
}

*/

// class Shape {
//     String color;
// }

// class Triangle extends Shape {

// }

/*

class Shape {
    public void area() {
        System.out.println("Displays area.");
    }
}

class Triangle extends Shape {
    public void area (int l, int h) {
        System.out.println(1/2*l*h);
    }
}

class Circle extends Shape {
    public void area (int r) {
        System.out.println((3.14)*r*r);
    }
}

*/

// class EquilateralTriangle extends Triangle {
//     public void area (int l,int h){
//         System.out.println(1/2*l*h);
//     }
// }

abstract class Animal {
    abstract void walk();
}

class Horse extends Animal {
    public void walk() {
        System.out.println("Walks on 4 legs.");
    }
}

class Chicken extends Animal {
    public void walk(){
        System.out.println("walks on 2 legs.");
    }
}

public class OOPS {
    public static void main(String args[]) {

        Horse horse = new Horse();
        horse.walk();
        // Animal animal = new Animal();
        // animal.walk();

        // bank.Bank.Account account1 = new Bank();

        // Triangle t1 = new Triangle();
        // t1.color = "Red";

        // Pen pen1 = new Pen();
        // pen1.color = "blue";
        // pen1.type = "gel";

        // Pen pen2 =  new Pen();
        // pen2.color = "Black";
        // pen2.type = "BallPoint";

        // pen1.printColor();
        // pen2.printColor();

        // Student s1 = new Student("Deep", 18);
        // s1.printInfo();


    }
}
