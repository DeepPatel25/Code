class Solution {
public:
    int distMoney(int money, int children) {
        vector<int> child(children, 1);
        money -= children;
        int i = 0;

        if (money < 0)
            return -1;

        while (i < child.size() and money) {
            if (money + child[i] >= 8) {
                int rem = 8 - child[i];
                child[i] = 8;
                money -= rem;
            } else {
                if (money + child[i] == 4) {
                    if (i + 1 < child.size())
                        child[i + 1] += 1;
                    else
                        child[i - 1] += 1;
                    
                    money -= 1;   
                }

                child[i] += money;
                money = 0;
            }

            i++;
        }

        if (money > 0)
            child[0] += money;

        int count = 0;
        for (int c: child)
            if (c == 8)
                count++;

        return count;
    }
};