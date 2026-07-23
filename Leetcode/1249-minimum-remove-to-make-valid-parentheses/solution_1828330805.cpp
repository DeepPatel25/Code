class Solution {
public:
    string minRemoveToMakeValid(string s) {
        ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
        int leftCount = 0;
        int rightCount = 0;
        stack<char> stack;

        for (char ch: s) {
            if (ch == '(')
                leftCount++;
            else if (ch == ')')
                rightCount++;

            if (rightCount > leftCount)
                rightCount--;
            else
                stack.push(ch);
        }

        string result = "";

        while(!stack.empty()) {
            char currChar = stack.top();
            stack.pop();

            if (leftCount > rightCount && currChar == '(')
                leftCount--;
            else
                result += currChar;
        }

        reverse(result.begin(), result.end());
        return result;
    }
};