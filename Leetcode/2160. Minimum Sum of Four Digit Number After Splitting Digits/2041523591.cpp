class Solution {
public:
    int minimumSum(int num) {
        priority_queue<int, vector<int>, greater<int>> pq;

        while (num) {
            pq.push(num % 10);
            num /= 10;
        }

        int num1 = pq.top() * 10;
        pq.pop();

        int num2 = pq.top() * 10;
        pq.pop();

        num1 += pq.top();
        pq.pop();

        num2 += pq.top();
        pq.pop();
    
        return num1 + num2;
    }
};