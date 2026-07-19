/*
// Definition for a Node.
class Node {
    public int val;
    public List<Node> children;

    public Node() {}

    public Node(int _val) {
        val = _val;
    }

    public Node(int _val, List<Node> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
    public List<List<Integer>> levelOrder(Node root) {
        List<List<Integer>> listF = new ArrayList<>();
        
        if(root==null) return listF;
        
        Queue<Node> q = new LinkedList<>();
        q.add(root);
        
        while(!q.isEmpty()){
            List<Integer> listR = new ArrayList<>();
            int size = q.size();
            
            while(size-- > 0) {
                Node temp = q.remove();
                for(int i=0; i<temp.children.size(); i++){
                    q.add(temp.children.get(i));
                }
                listR.add(temp.val);
            }
            listF.add(listR);
        }
        
        return listF;
    }
}