/**
 * Definition for singly-linked list.
 * class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) {
 *         val = x;
 *         next = null;
 *     }
 * }
 */
public class Solution {
    public ListNode detectCycle(ListNode head) {
        if(head==null || head.next==null) return null;
        
        ListNode slow = head;
        ListNode fast = head;
        ListNode entry = head;
        
        while(fast!=null && fast.next!=null){
            fast = fast.next.next;
            slow = slow.next;
            
            if(slow == fast){
                while(entry!=slow){
                    slow = slow.next;
                    entry = entry.next;
                }
                return entry;
            }
        }
        
        return null;
    }
}