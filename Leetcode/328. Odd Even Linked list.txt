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
    public ListNode oddEvenList(ListNode head) {
        List<Integer> oddl = new ArrayList<>();
        List<Integer> evenl = new ArrayList<>();
        
        ListNode temp = head;
        
        for(int i=1; temp!=null; i++){
            if(i%2==1)
                oddl.add(temp.val);
            else
                evenl.add(temp.val);
            temp=temp.next;
        }
        
        temp=head;
        
        for(int i=0; i<oddl.size(); i++){
            temp.val=oddl.get(i);
            temp = temp.next;
        }
        for(int i=0; i<evenl.size(); i++){
            temp.val=evenl.get(i);
            temp = temp.next;
        }
        
        return head;
    }
}