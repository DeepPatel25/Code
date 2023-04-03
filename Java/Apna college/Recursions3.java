// import java.util.ArrayList;

public class Recursions3 {

    // 1. Print all Permutations of a String

        // public static void printPermutation (String str, String permutation) {

        //     if(str.length()==0) {
        //         System.out.println(permutation);
        //         return;
        //     }

        //     for(int i=0; i<str.length();i++){
        //         char currChar = str.charAt(i);
        //         String newStr = str.substring(0, i) + str.substring(i+1);

        //         printPermutation(newStr, permutation+currChar);
        //     }
        // }

        // public static void main(String args[]) {
        //     String str = "abcd";
        //     printPermutation(str, "");
        // }

    // 2. Count total paths in a maze to move from (0,0) to (n,m)

        // public static int countPaths(int i, int j, int n, int m) {

        //     if( i == n || j == m) {
        //         return 0;
        //     }

        //     if( i == n-1 && j == m-1) {
        //         return 1;
        //     }

        //     // Move downwards
        //     int downPaths = countPaths(i+1, j, n, m);

        //     // Move Right
        //     int rightPaths = countPaths(i, j+1, n, m);
            
        //     return downPaths + rightPaths;
        // }

        // public static void main (String args[]) {
        //     int n = 3, m = 3;
        //     int count = countPaths(0, 0, n, m);
        //     System.out.println(count);
        // }

    // 3. Place tiles of size 1Xm in a floor of size nXm.

        // public static int placeTiles(int n, int m) {

        //     if(n == m) {
        //         return 2;
        //     }

        //     if(n<m) {
        //         return 1;
        //     }
            
        //     // Vertically
        //     int vertPlacements = placeTiles(n-m, m);

        //     // Horizontal
        //     int horPlacements = placeTiles(n-1, m);

        //     return vertPlacements + horPlacements;
        // }

        // public static void main (String args[]) {
        //     int n = 4, m = 2;
        //     System.out.println(placeTiles(n, m));

        // }

    // 4. Find the number of ways in which you can invite n people to your party, single or pairs.

        // public static int callGuest (int n) {

        //     if(n <= 1) {
        //         return 1;
        //     }

        //     // Single 
        //     int ways1 = callGuest(n-1);

        //     // Pair
        //     int ways2 = (n-1) * callGuest(n-2);

        //     return ways1 + ways2;
        // } 

        // public static void main(String args[]) {
        //     int n = 4;
        //     System.out.println(callGuest(n));
        // }

    // 5. Print all subsets of a set of first n natural numbers

        // public static void printSubset(ArrayList<Integer> subset) {
        //     for(int i =0; i<subset.size();i++){
        //         System.out.print(subset.get(i)+" ");
        //     }
        //     System.out.println();
        // }

        // public static void findSubsets(int n, ArrayList<Integer> subset) {

        //     if(n==0) {
        //         printSubset(subset);
        //         return;
        //     }

        //     // Add hoga
        //     subset.add(n);
        //     findSubsets(n-1, subset);

        //     // Add nahi hoga
        //     subset.remove(subset.size()-1);
        //     findSubsets(n-1, subset);
        // }

        // public static void main (String args[]) {
        //     int n = 3;
        //     ArrayList<Integer> subset = new ArrayList<>();
        //     findSubsets(n, subset);
        // }
}
