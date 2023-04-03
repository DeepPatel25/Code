// import java.util.Scanner;

public class Bit_Manipulation {
    public static void main(String args[]) {

        // GetBit

            // int n = 5;
            // int pos = 3;
            // int bitMask = 1<<pos;

            // if((bitMask & n) == 0 ){
            // System.out.println("Bit was Zero");
            // }
            // else {
            // System.out.println("Bit was one");
            // }

        // SetBit

            // int n = 5;
            // int pos = 3;
            // int bitMask = 1<<pos;

            // int newNumber = bitMask | n;
            // System.out.println(newNumber);

        // Clear Bit

            // int n = 5;
            // int pos = 3;
            // int bitMask = 1<<pos;
            // int notBitMask = ~(bitMask);

            // int newNumber = notBitMask & n;
            // System.out.println(newNumber);

        // Update Bit

        // Scanner sc = new Scanner(System.in);
        // int oper = sc.nextInt();
        int oper = 1;

        int n = 5;
        int pos = 1;
        int bitMask = 1<<pos;

        if(oper == 1) {
            
            int newNumber = bitMask | n;
            System.out.println(newNumber);
        }
        else if(oper == 0){
            int num = ~(bitMask);
            int newNumber = num & n;
            System.out.println(newNumber);
        }   
    }
}