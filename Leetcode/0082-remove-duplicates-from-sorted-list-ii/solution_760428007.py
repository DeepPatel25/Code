# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def deleteDuplicates(self, head):
        """
        :type head: ListNode
        :rtype: ListNode
        """
        if not head or not head.next:
            return head
        
        d = {}
        temp = head
        
        while temp!=None:
            if temp.val in d:
                d[temp.val] += 1
            else:
                d[temp.val] = 1
            temp = temp.next
        
        l = []
        
        for i in d:
            if d[i]==1:
                l.append(i)
        
        if l == []:
            return None
        
        l.sort()
        
        head2 = ListNode(l[0])
        temp2 = head2
        
        for i in range(1, len(l)):
            node = ListNode(l[i])
            temp2.next = node
            temp2 = temp2.next
            
        return head2