
class MedianFinder {
    List<Integer> li;
    public MedianFinder() {
        li = new ArrayList<>();
    }
    
    public void addNum(int num) {
        li.add(num);
        Collections.sort(li);
    }
    
    public double findMedian() {
        if(li.isEmpty()) return 0;
        
        int i = li.size();
        
        double ans = 0;
        
        if(i%2==1){
            ans = li.get(i/2);
        } else {
            ans = ((double)li.get(i/2) + (double)li.get(i/2-1)) / 2;
        }
        
        return ans;
    }
}

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder obj = new MedianFinder();
 * obj.addNum(num);
 * double param_2 = obj.findMedian();
 */