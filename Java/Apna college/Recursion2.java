// import java.util.HashSet;

public class Recursion2 {

    // 1. Tower of Hanoi

        // public static void towerOfHanoi (int n, String src, String helper, String dest) {

        //     if(n == 1){
        //         System.out.println("Transfer Disk : "+ n +" from "+ src +" to "+ dest);
        //         return;
        //     }

        //     towerOfHanoi(n-1, src, dest, helper);
        //     System.out.println("Transfer Disk : "+ n +" from "+ src +" to "+ dest);
        //     towerOfHanoi(n-1, helper, src, dest);

        // }

        // public static void main (String args[]) {
        //     int n = 4;
        //     towerOfHanoi(n, "S", "H", "D");
        // }

    // 2. Print String in Reverse

        // public static void reverseString(String str, int idx) {
        //     if( idx == 0 ) {
        //         System.out.println(str.charAt(idx));
        //         return;
        //     }
        //     System.out.println(str.charAt(idx));
        //     reverseString(str, idx-1);
        // }

        // public static void main (String args[]) {
        //     String str = "Deep";
        //     reverseString(str, str.length()-1);
        // }

    // 3. Find the 1st and last occurance of an element in string

        // public static int first = -1;
        // public static int last = -1;

        // public static void findOccurance(String str, int idx, char element) {
        //     if(idx==str.length()) {
        //         System.out.println(first);
        //         System.out.println(last);
        //         return;
        //     }
        //     char currChar = str.charAt(idx);
        //     if(currChar==element){
        //         if(first==-1){
        //             first = idx;
        //         }
        //         else{
        //             last = idx;
        //         }
        //     }
        //     findOccurance(str, idx+1, element);
        // }

        // public static void main(String args[]) {
        //     String str = "abaacdcefaah";
        //     findOccurance(str, 0, 'c');
        // }

    // 4. Check if an array is sorted(Strictly Increasing) 

        // public static boolean isSorted (int arr[], int idx){
        //     if(idx==arr.length-1){
        //         return true;
        //     }
        //     if(arr[idx]<arr[idx+1]){
        //         return isSorted(arr, idx+1);
        //     }
        //     else{
        //         return false;
        //     }
        // }

        // public static void main (String args[]) {
        //     int[] arr = {1,2,6,4,5};

        //     if(isSorted(arr, 0)) {
        //         System.out.println("Array is Sorted.");
        //     }
        //     else {
        //         System.out.println("Array is not sorted.");
        //     }
        // } 
    
    // 5. Move all 'x' to the end of the string.

        // public static void moveAllX(String str,int idx,int count,String newString) {

        //     if(idx==str.length()) {
        //         for(int i=0; i<count;i++){
        //             newString+='x';
        //         }
        //         System.out.println(newString);
        //         return;
        //     }

        //     char currChar = str.charAt(idx);
        //     if(currChar=='x'){
        //         count++;
        //         moveAllX(str, idx+1, count, newString);
        //     }
        //     else{
        //         newString += currChar;
        //         moveAllX(str, idx+1, count, newString);
        //     }
        // }

        // public static void main(String args[]) {
        //     String str = "axbcxxd";
        //     moveAllX(str, 0, 0, "");
        // }

    // 6. Remove duplicates in a string

        // public static boolean[] map = new boolean[26];

        // public static void removeDuplocates(String str, int idx, String newString) {

        //     if(idx== str.length()) {
        //         System.out.println(newString);
        //         return;
        //     }

        //     char currChar = str.charAt(idx);
        //     if(map[currChar - 'a'] == true) {
        //         removeDuplocates(str, idx+1, newString);
        //     }
        //     else{
        //         newString += currChar;
        //         map[currChar-'a'] = true;
        //         removeDuplocates(str, idx+1, newString);
        //     }
        // }

        // public static void main (String args[]) {
        //     String str = "abcdda";
        //     removeDuplocates(str, 0, "");
        // }

    // 7. Print all the subsequence of a string

        // public static void subsequences (String str,int idx, String newstString) {

        //     if(idx==str.length()) {
        //         System.out.println(newstString);
        //         return;
        //     }
        //     char currChar = str.charAt(idx);

        //     // To be 
        //     subsequences(str, idx+1, newstString+currChar);
        //     // Or not to be
        //     subsequences(str, idx+1, newstString);
        // }

        // public static void main (String args[]) {
        //     String str = "abc";
        //     subsequences(str, 0, "");
        // }

    // 8. Print all unique subsequence

        // public static void subsequences (String str,int idx, String newstString, HashSet<String> set) {

        //     if(idx==str.length()) {
        //         if(set.contains(newstString)) {
        //             return;
        //         }
        //         else {
        //             System.out.println(newstString);
        //             set.add(newstString);
        //             return;
        //         }
        //     }
        //     char currChar = str.charAt(idx);

        //     // To be 
        //     subsequences(str, idx+1, newstString+currChar,set);
        //     // Or not to be
        //     subsequences(str, idx+1, newstString, set);
        // }

        // public static void main (String args[]) {
        //     String str = "aaa";
        //     HashSet<String> set = new HashSet<>();
        //     subsequences(str, 0, "", set);
        // }

    // 9. Print keypad Combination

        // public static String[] keypad = {".","abc", "def","ghi","jkl","mno","pqrs","tu","vwx","yz"};

        // public static void printCombination(String str, int idx, String combination) {

        //     if(idx==str.length()) {
        //         System.out.println(combination);
        //         return;
        //     }

        //     char currChar = str.charAt(idx);
        //     String mapping = keypad[currChar - '0'];

        //     for(int i=0;i<mapping.length();i++){
        //         printCombination(str, idx+1, combination+mapping.charAt(i));
        //     }
        // }

        // public static void main(String args[]) {
        //     String str =  "234";
        //     printCombination(str, 0, "");
        // }
}
