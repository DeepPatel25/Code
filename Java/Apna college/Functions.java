// import java.util.Scanner;

public class Functions {

    // public static void printMyName(String name) {
    //     System.out.println(name);
    //     return;
    // }

    public static int calculateSum(int a,int b) {
        int sum = a + b;
        return sum;
    }

    public static int calculateProduct(int a,int b) {
        int mul = a * b;
        return mul;
    }

    public static int factorial(int n) {
        if(n==1){
            return 1;
        }
        return n * factorial(n-1);
    }

    public static void main(String args[]) {
        // Scanner sc = new Scanner(System.in);
        // int n = sc.nextInt();

        // System.out.println(factorial(n));   
    }
}
