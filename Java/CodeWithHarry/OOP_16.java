import java.util.Scanner;
import java.math.BigInteger;

public class OOP_16 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Double d;
        System.out.println("Enter the Number: ");
        String[] decimal = sc.nextLine().split("[.]");
        System.out.println(decimal[0]);
        System.out.println(decimal[1]);
    }
}