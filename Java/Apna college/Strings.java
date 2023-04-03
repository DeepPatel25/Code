import java.lang.invoke.StringConcatFactory;

public class Strings {
    public static void main(String args[]) {
        // String name = "Tony";
        // String fullName = "Tony Stark";
        // String sentence = "My name is Tony Stark";

        // Scanner sc = new Scanner(System.in);
        // String name = sc.nextLine();
        // System.out.println(name);

        // Concatenation
        // String firstName = "Tony ";
        // String lastName = "Stark";
        // String fullName = firstName + lastName ;
        // System.out.println(fullName.length());

        // charAt
        // for(int i=0; i<fullName.length(); i++) {
        //     System.out.println(fullName.charAt(i));
        // }

        // Compare

        // String name1 = "Tony";
        // String name2 = "Tony";

        // if(name1.compareTo(name2) == 0) {
        //     System.out.println("Strings are Equal");
        // }
        // else {
        //     System.out.println("Strings are not Equal.");
        // }

        // if(name1 == name2) {
        //     System.out.println("Strings are Equal");
        // }
        // else {
        //     System.out.println("Strings are not Equal.");
        // }

        // Substring

        String sentence = "My name is Tony";

        String name = sentence.substring(4);
        System.out.println(name);
    }
}