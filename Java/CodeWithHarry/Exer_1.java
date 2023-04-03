import java.util.Scanner;

public class Exer_1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter Your Marks");
        int a,b,c,d,e;
        System.out.println("Enter 1st Subject Mark");
        a = sc.nextInt();
        System.out.println("Enter 2nd Subject Mark");
        b = sc.nextInt();
        System.out.println("Enter 3rd Subject Mark");
        c = sc.nextInt();
        System.out.println("Enter 4th Subject Mark");
        d = sc.nextInt();
        System.out.println("Enter 5th Subject Mark");
        e = sc.nextInt();

        int average = (a + b + c + d + e) / 5 ;
        System.out.println("This is your percenatage");
        System.out.println(average);
        sc.close();
    }
}
