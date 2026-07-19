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
    public ListNode removeNthFromEnd(ListNode head, int n) {
        ListNode cur=new ListNode(0);
        ListNode temp=new ListNode(0);
        ListNode prev=new ListNode(0);
        cur=head;
        if(head.next==null && n==1)
        {
        head=null;
        return head;
        }

        int count=0;
        while(cur!=null)
        {
            count++;
            cur=cur.next;
        }
        cur=head;
        if(count==n)
        {
            head=cur.next;
            cur.next=null;
        }
        else
        {
           for(int i=0;i<count-n;i++)
           {
           temp=cur;
           cur=cur.next;
           }
        temp.next=cur.next;
        cur.next=null;
        }
        return head;
    }
}