public class StringB {
    public static void main(String args[]) {
        // Strings are immutable
        StringBuilder sb = new StringBuilder("H");
        System.out.println(sb);

        // Char at index 0
        // System.out.println(sb.charAt(0));

        // Set char at index 0 
        // sb.setCharAt(0, 'P');
        // System.out.println(sb);

        // Insertion
        // sb.insert(2,'n');
        // System.out.println(sb);

        // // Deletion
        // sb.delete(2, 4);
        // System.out.println(sb);

        // Append
        sb.append("ello");
        System.out.println(sb.length());
    }
}
