/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode partition(ListNode head, int x) {
        ArrayList<Integer> temp1 = new ArrayList<>();
        ArrayList<Integer> temp2 = new ArrayList<>();
        
        ListNode ex = head;
        
        while(ex!=null){
            if(ex.val<x)
                temp1.add(ex.val);
            else
                temp2.add(ex.val);
            ex = ex.next;
        }
        
        ex = head;
        
        int i = 0;
        while(i<temp1.size()){
            ex.val = temp1.get(i);
            ex = ex.next;
            i++;
        }
        
        i=0;
        while(i<temp2.size()){
            ex.val = temp2.get(i);
            ex = ex.next;
            i++;
        }
        
        return head;
    }
}