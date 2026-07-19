import java.util.regex.*;

class Solution {
    public boolean isMatch(String s, String p) {
        return Pattern.compile(p).matcher(s).matches();
    }
}