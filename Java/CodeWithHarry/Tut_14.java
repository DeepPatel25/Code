public class Tut_14 {
    public static void main(String[] args) {
        String a = "Harry";
        System.out.println(a);
        System.out.println(a.length());
        System.out.println(a.toLowerCase());
        System.out.println(a.toUpperCase());

        String nonTrim = "     ssbsvdhbv v bugfu  ";
        System.out.println(nonTrim.trim());

        System.out.println(a.substring(2));
        System.out.println(a.substring(0, 2));
        System.out.println(a.replace("r", "lo"));

        System.out.println(a.startsWith("Har"));
        System.out.println(a.endsWith("y"));

        System.out.println(a.charAt(0));
        System.out.println(a.indexOf("r"));
        System.out.println(a.indexOf("rry", 3));
        System.out.println(a.lastIndexOf("r"));
        System.out.println(a.equals("Harry"));
        System.out.println(a.equalsIgnoreCase("harry"));
    }
}