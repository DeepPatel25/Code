class MyCalendar {
    ArrayList<Integer> li;

    public MyCalendar() {
        li = new ArrayList<>();
    }
    
    public boolean book(int start, int end) {
        if(li.isEmpty()){
            li.add(end);
            return true;
        }
        
        if(start<li.get(li.size()-1)){
            return false;
        }
        
        li.add(end);
        return true;
    }
}

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar obj = new MyCalendar();
 * boolean param_1 = obj.book(start,end);
 */