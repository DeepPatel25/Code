class Bank {
public:
    vector<long long> accounts;

    Bank(vector<long long>& balance) {
        accounts = balance;    
    }

    bool check(int account) {
        return account >= 1 && account <= accounts.size();
    }
    
    bool transfer(int account1, int account2, long long money) {
        if(check(account1) && check(account2)) {
            if(accounts[account1 - 1] >= money) {
                accounts[account1 - 1] -= money;
                accounts[account2 - 1] += money;

                return true;
            }
        }

        return false;
    }
    
    bool deposit(int account, long long money) {
        if(check(account)) {
            accounts[account - 1] += money;
            return true;
        }
        
        return false;
    }
    
    bool withdraw(int account, long long money) {
        if(check(account)) {
            if(accounts[account - 1] >= money) {
                accounts[account - 1] -= money;
                return true;
            }
        }

        return false;
    }
};

/**
 * Your Bank object will be instantiated and called as such:
 * Bank* obj = new Bank(balance);
 * bool param_1 = obj->transfer(account1,account2,money);
 * bool param_2 = obj->deposit(account,money);
 * bool param_3 = obj->withdraw(account,money);
 */