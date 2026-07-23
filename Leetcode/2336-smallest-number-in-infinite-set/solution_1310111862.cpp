class SmallestInfiniteSet {
public:
    int smallest;
    priority_queue <int, vector<int>, greater<int>> pq;
    unordered_set<int> st;

    SmallestInfiniteSet() {
        smallest = 1;
    }
    
    int popSmallest() {
        if(!pq.empty() && pq.top() < smallest) {
            int val = pq.top();
            pq.pop();

            return val;
        }

        st.insert(smallest);
        return this->smallest++;
    }
    
    void addBack(int num) {
        if(st.find(num) == st.end()) {
            return;
        }

        pq.push(num);
    }
};

/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
 * int param_1 = obj->popSmallest();
 * obj->addBack(num);
 */