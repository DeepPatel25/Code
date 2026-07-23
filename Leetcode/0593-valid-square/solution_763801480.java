class Solution {
    public boolean validSquare(int[] p1, int[] p2, int[] p3, int[] p4) {
        int[] arr = { len(p1, p2), len(p1, p3), len(p1, p4), len(p2, p3), len(p2, p4), len(p3, p4)};
        Arrays.sort(arr);
        
        if((arr[0]==arr[1] && arr[1]==arr[2] && arr[2]==arr[3]) && (arr[4]==arr[5]))
            return true;
        return false;
    }
    
    public int len(int[] x, int[] y){
        return Math.abs(x[0]-y[0]) + Math.abs(x[1]-y[1]);
    }
}