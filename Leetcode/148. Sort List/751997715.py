# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def sortList(self, head):
        """
        :type head: ListNode
        :rtype: ListNode
        """
        
        temp = head
        li = []
        
        while temp!=None:
            li.append(temp.val)
            temp = temp.next
        
        temp = head
        li.sort()
        
        i=0
        while temp!=None:
            temp.val = li[i]
            temp = temp.next
            i+=1
            
        return head