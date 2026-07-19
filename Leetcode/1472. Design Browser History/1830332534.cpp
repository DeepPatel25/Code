struct Node {
    Node* prev = nullptr;
    Node* next = nullptr;

    const string url;

    Node(const string& url): url(url) {}
};

class BrowserHistory {
private:
    Node* curr = nullptr;

public:
    BrowserHistory(string homepage) {
        ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
        curr = new Node(homepage);
    }
    
    void visit(string url) {
        curr->next = new Node(url);
        curr->next->prev = curr;
        curr = curr->next;
    }
    
    string back(int steps) {
        while(curr->prev && steps-- > 0) {
            curr = curr-> prev;
        }

        return curr->url;
    }
    
    string forward(int steps) {
        while(curr->next && steps-- > 0) {
            curr = curr->next;
        }

        return curr->url;
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */