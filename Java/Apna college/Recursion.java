class Recursion {

    // 1. Print Numbers from 5 to 1

        // public static void printNumbers(int n) {
        //     if(n==0){
        //         return;
        //     }
        //     System.out.println(n);
        //     printNumbers(n-1);
        // }
        // public static void main (String args[]) {
        //     int n = 5;
        //     printNumbers(n);
        // }
    
    // 2. Print Numbers From 1 to 5

        // public static void printNum(int n) {
        //     if(n == 6){
        //         return;
        //     }
        //     System.out.println(n);
        //     printNum(n+1);
        // }

        // public static void main (String args[]) {
        //     int n = 1;
        //     printNum(n);
        // }

    // 3. Print sum of n Natural Numbers 

        // public static int calculateSum (int n) {
        //     if(n==1){
        //         return 1;
        //     }
        //     return n + calculateSum(n-1);
        // }

        // public static void main (String args[]) {
        //     int n = 10;
        //     System.out.println(calculateSum(n));
        // }

    // 4. Print Factorial of number n

        // public static int factorial(int n) {
        //     if(n==1 || n==0){
        //         return 1;
        //     }
        //     return n * factorial(n-1);
        // }

        // public static void main (String args[]) {
        //     int n = 10;
        //     System.out.println(factorial(n));
        // }

    // 5. Print the Fibonacci sequence till nth term.

        // public static void fibonacci(int a, int b, int n) {
        //     if(n==0){
        //         return;
        //     }
        //     int c = a + b;
        //     System.out.println(c);
        //     fibonacci(b, c, n-1);
        // }

        // public static void main (String args[]) {
        //     int a = 0;
        //     int b = 1;
        //     System.out.println(a);
        //     System.out.println(b);
        //     int n = 7;
        //     fibonacci(a, b, n-2);
        // }

    // 6. Print x^n (stack height = n)

        // public static int calcPower (int x, int n) {
        //     if(n==0){
        //         return 1;
        //     }
        //     if(x==0){
        //        return 0;
        //     }
        //     return x * calcPower(x,n-1);
        // }

        // public static void main ( String args[]) {
        //     System.out.println(calcPower(2, 10));
        // }

    // 7. Print x^n (Stack height =  log n) 

        // public static int calcPower(int x, int n) {
        //     if(n==0) {
        //         return 1;
        //     }
        //     if(x == 0) {
        //         return 0;
        //     }
        //     // If n is even 
        //     if(n%2 == 0) {
        //         return calcPower(x, n/2) * calcPower(x, n/2);
        //     }
        //     // If n is odd
        //     else {
        //         return calcPower(x, n/2) * calcPower(x, n/2) * x;
        //     }   
        // }

        // public static void main (String args[]) {
        //     System.out.println(calcPower(2, 4));
        // }
}