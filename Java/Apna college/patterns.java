public class patterns {
    public static void main(String args[]) {

        // Solid Rectangle Pattern

            // for(int i=0; i<4; i++){
            //     for(int j=0; j<5; j++){
            //         System.out.print("*");
            //     }
            //     System.out.println();
            // }

        // Hollow Rectangle
        
            // for(int i=1; i<=4;i++){
            //     for(int j=1; j<=5; j++){
            //         if(i==1 || i==4 || j==1 || j==5){
            //             System.out.print("*");
            //         }
            //         else{
            //             System.out.print(" ");
            //         }
            //     }
            //     System.out.println();
            // }
        
        // Half Pyramid

            // for(int i=1; i<=4; i++){
            //     for(int j=1; j<=i; j++){
            //         System.out.print("*");
            //     }
            //     System.out.println();
            // }

        // Inverted Half Pyramid

            // for(int i=4; i>=1; i--){
            //     for(int j=1; j<=i; j++){
            //         System.out.print("*");
            //     }
            //     System.out.println();
            // }

        // Inverted Half Pyramid (Rotated by 180 Degree)

            // for(int i=1; i<=4; i++){
            //     for(int j=1; j<=4; j++){
            //         if((i+j)>=5){
            //             System.out.print("*");
            //         }
            //         else{
            //             System.out.print(" ");
            //         }
            //     }
            //     System.out.println();
            // }

        // Half Pyramid with Numbers

            // for(int i=1; i<=5; i++){
            //     for(int j=1; j<=i; j++){
            //         System.out.print(j);
            //     }
            //     System.out.println();
            // }

        // Inverted Half Pyramid with Numbers
        
            // for(int i=5; i>=1; i--){
            //     for(int j=1; j<=i; j++){
            //         System.out.print(j+" ");
            //     }
            //     System.out.println();
            // }

        // Floyd's Triangle

            // int count = 1;
            // for(int i=1; i<=5; i++){
            //     for(int j=1; j<=i; j++){
            //         System.out.print(count+" ");
            //         count++;
            //     }
            //     System.out.println();
            // }

        // 0-1 Triangle

            // for(int i=1; i<=5; i++){
            //     for(int j=1; j<=i; j++){
            //         if((i+j)%2==0){
            //             System.out.print("1 ");
            //         }
            //         else{
            //             System.out.print("0 ");
            //         }
            //     }
            //     System.out.println();
            // }

        // Butterfly Pattern

            // int n=4;

            // for(int i=1; i<=n; i++){
            //     for(int j=1; j<=i; j++){
            //         System.out.print("*");
            //     }

            //     for(int j=1; j<=2*(n-i); j++){
            //         System.out.print(" ");
            //     }

            //     for(int j=1; j<=i; j++){
            //         System.out.print("*");
            //     }
            //     System.out.println();
            // }

            // for(int i=n; i>=1; i--){
            //     for(int j=1; j<=i; j++){
            //         System.out.print("*");
            //     }
            //     for(int j=1; j<=2*(n-i);j++){
            //         System.out.print(" ");
            //     }
            //     for(int j=1; j<=i;j++){
            //         System.out.print("*");
            //     }
            //     System.out.println();
            // }
        
        // Solid Rhombus

            // int n=5;

            // for(int i=1; i<=n; i++){
            //     for(int j=1; j<=n-i; j++){
            //         System.out.print(" ");
            //     }
            //     for(int j=1; j<=n; j++){
            //         System.out.print("*");
            //     }
            //     System.out.println();
            // }

        // Hollow Rhombus

            // int n=5;

            // for(int i=1; i<=n; i++){
            //     for(int j=1; j<=n-i; j++){
            //         System.out.print(" ");
            //     }
            //     for(int j=1; j<=n; j++){
            //         if(i==1 || i==n || j==1 || j==n){
            //             System.out.print("*");
            //         }
            //         else{
            //             System.out.print(" ");
            //         }
            //     }
            //     System.out.println();
            // }

        // Number Pyramid

            // int n = 5;

            // for(int i=1; i<=n; i++){
            //     for(int j=1; j<=n-i; j++){
            //         System.out.print(" ");
            //     }
            //     for(int j=1; j<=i; j++){
            //         System.out.print(i+" ");
            //     }
            //     System.out.println();
            // }

        // Palindromic Pattern

            // int n = 5;

            // for(int i=1; i<=5; i++){
            //     for(int j=1; j<=n-i; j++){
            //         System.out.print("  ");
            //     }

            //     for(int j=i; j>=1; j--){
            //         System.out.print(j+" ");
            //     }

            //     for(int j=2; j<=i; j++){
            //         System.out.print(j+" ");
            //     }
            //     System.out.println();
            // }

        // Diamond Pattern

            // int n=4;

            // for(int i=1; i<=n; i++){
            //     for(int j=1; j<=n-i; j++){
            //         System.out.print(" ");
            //     }
            //     for(int j=1; j<=2*i-1; j++){
            //         System.out.print("*");
            //     }
            //     System.out.println();
            // }

            // for(int i=n; i>=1; i--){
            //     for(int j=1; j<=n-i; j++){
            //         System.out.print(" ");
            //     }
            //     for(int j=1; j<=2*i-1; j++){
            //         System.out.print("*");
            //     }
            //     System.out.println();
            // }
        
        
    }
}
