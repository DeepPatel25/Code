class Solution {
    public boolean isValid(String s) {
    boolean d = true;
    Stack<Character> st = new Stack<>();
    int i=0;
    while(i<s.length()){
        if((s.charAt(i)=='(') || (s.charAt(i)=='{') || (s.charAt(i)=='[')){
            st.push(s.charAt(i));
        }
        else{
            char c = st.pop();
            if(c==s.charAt(i)){
                d=true;
            }
            else{
                d = false;
                return d;
            }
        }
        i++;
        }
    return d;
    }
}