/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) {
 *         val = x;
 *         next = null;
 *     }
 * }
 */
public class Solution {
    public ListNode getIntersectionNode(ListNode headA, ListNode headB) {
        Set<ListNode> checked = new HashSet<>();
        
        while(headA!=null){
            checked.add(headA);
            headA = headA.next;
        }
        
        while(headB!=null){
            if(checked.contains(headB)){
                return headB;
            }
            headB = headB.next;
        }
        
        return null;
    }
}