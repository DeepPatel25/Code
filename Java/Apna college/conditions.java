import java.util.Scanner;

public class conditions {
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);

        /*
        int age = sc.nextInt();
        if(age>18){
            System.out.println("Adult");
        }
        else{
            System.out.println("Not Adult");
        }
        */

        /*
        int x = sc.nextInt();

        if(x%2==0){
            System.out.println("Even");
        }
        else{
            System.out.println("Odd");
        }
        */

        /*
        int a = sc.nextInt();
        int b = sc.nextInt();

        if(a==b){
            System.out.println("Equal");
        }
        else if(a>b){
            System.out.println("A is greater than B");
        }
        else{
            System.out.println("B is greater than A");
        }
        */

        int button =sc.nextInt();

        switch(button) {
            case 1: System.out.println("Hello");
                    break;
            case 2: System.out.println("Namaste");
                    break;
            case 3: System.out.println("Bonjour");
                    break;
            default: System.out.println("Invalid Button");
        }
    }
}
