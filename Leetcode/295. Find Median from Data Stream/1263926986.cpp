class MedianFinder {
public:
    priority_queue<int> max_pq; // Max heap for the lower half
    priority_queue<int, vector<int>, greater<int>> min_pq; // Min heap for the upper half

    MedianFinder() {
        
    }
    
    void addNum(int num) {
        // Add the new number to the max heap
        max_pq.push(num);
        
        // Ensure the largest element in the max heap is not larger than the smallest in the min heap
        min_pq.push(max_pq.top());
        max_pq.pop();

        // Balance the sizes of the heaps if necessary
        if (min_pq.size() > max_pq.size()) {
            max_pq.push(min_pq.top());
            min_pq.pop();
        }
    }
    
    double findMedian() {
        if (max_pq.size() == min_pq.size()) {
            // If both heaps are the same size, the median is the average of the roots of both heaps
            return (max_pq.top() + min_pq.top()) / 2.0;
        } else {
            // If the heaps are not the same size, the median is the root of the max heap
            return max_pq.top();
        }
    }
};
