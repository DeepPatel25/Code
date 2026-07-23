typedef long long ll;

class Solution {
public:
    vector<ll> lineAndCycle(ll n, ll lineLen, ll cycleLen) {
        vector<ll> res(n);

        for(ll d = 1; d <= lineLen; d++) {
            ll mn = d + 1;
            ll mx = d + (cycleLen / 2);
            res[mn - 1] += 2;
            res[mx - 1] -= 2;
        }

        ll mn = cycleLen / 2 + 1;
        ll mx = cycleLen / 2 + lineLen;

        ll add = (cycleLen & 1 ? 2 : 1);

        res[mn - 1] += add;
        if(mx < n) res[mx] -= add;

        for(ll i = 1; i < n; i++)
            res[i] += res[i - 1];

        for(ll len = 1; len <= lineLen; len++)
            res[len - 1]++;

        return res;
    }

    vector<ll> lineAnswer(ll n, ll lineLen) {
        vector<ll> res(n);

        for(ll len = 1, add = lineLen - 1; len < lineLen; len++, add--) {
            res[len - 1] += add;
        }

        return res;
    }

    vector<ll> cycleAnswer(ll n, ll cycleLen) {
        vector<ll> res(n);

        for(ll len = 1; len < cycleLen / 2; len++)
            res[len - 1] += cycleLen;
        
        if(cycleLen & 1) {
            int len = cycleLen / 2;
            if(len - 1 >= 0)
                res[len - 1] += cycleLen;
        } else {
            int len = cycleLen / 2;
            if(len - 1 >= 0)
                res[len - 1] += (cycleLen / 2);
        }

        return res;
    }

    vector<ll> twoLineAnswer(ll n, ll lineLen1, ll lineLen2, ll x, ll y) {
        vector<ll> res(n);

        if(lineLen1 > lineLen2) swap(lineLen1, lineLen2);
        ll plus = (x != y ? 1 : 0);

        for(ll i = 0; i < lineLen1; i++) {
            ll mn = i + plus + 2;
            ll mx = i + plus + 1 + lineLen2;

            res[mn - 1]++;
            if(mx < n) res[mx]--;
        }

        for(int i = 1; i < n; i++) {
            res[i] += res[i - 1];
        }

        return res;
    }

    vector<long long> countOfPairs(int n, int x, int y) {
        vector<ll> res(n);
        if(x > y) swap(x, y);

        ll lineLen1 = x - 1;
        ll lineLen2 = n - y;
        ll cycleLen = y - x + 1;
        ll finalLen = lineLen1 + lineLen2 + 2;
        
        auto line1ans = lineAnswer(n, lineLen1);
        auto line2ans = lineAnswer(n, lineLen2);
        auto cycleAns = cycleAnswer(n, cycleLen);
        auto l1c = lineAndCycle(n, lineLen1, cycleLen);
        auto l2c = lineAndCycle(n, lineLen2, cycleLen);
        auto l1l2 = twoLineAnswer(n, lineLen1, lineLen2, x, y);

        for(int i = 0; i < n; i++) {
            res[i] += line1ans[i] + line2ans[i] + cycleAns[i] + l1c[i] + l2c[i] + l1l2[i];
            res[i] *= 2;
        }

        return res;
    }
};