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
    
    ListNode head;
    ListNode temp;
    
    public void addLast(int val) {
        ListNode newnode = new ListNode(val);
        if(head == null){
            head = newnode;
            temp = newnode;
            return;
        }
        temp.next = newnode;
        temp = newnode;
        
    } 
        
    
    public ListNode addTwoNumbers(ListNode l1, ListNode l2) {
        int c = 0, a = 0;
        while(l1!= null && l2!=null) {
            a = l1.val + l2.val + c;
            if(a<10) {
                addLast(a);
            }
            else {
                int b = a % 10;
                addLast(b);
            }
            l1 = l1.next;
            l2 = l2.next;
            c = a / 10;
        }
        while(l1!=null) {
            
            if (c==1) {
                int d = (l1.val + c)%10;
                addLast(d);
                c = (l1.val + c) / 10;
            }
            else {
                addLast(l1.val);
            }
            l1 = l1.next;
        }
        while(l2!=null) {
            if(c==1) {
                int e = (l2.val + c)%10;
                addLast(e);
                c = (l2.val + c) / 10;
            }
            else {
                addLast(l2.val);
            }
            l2 = l2.next;
        }
        
        if(c==1){
            addLast(c);
        }
        return head;
    }
}