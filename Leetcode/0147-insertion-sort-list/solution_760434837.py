# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def insertionSortList(self, head):
        """
        :type head: ListNode
        :rtype: ListNode
        """
        temp = head
        l = []
        
        while temp!=None:
            l.append(temp.val)
            temp = temp.next
        
        l.sort()
        
        temp2 = head
        i = 0
        
        while temp2!=None:
            temp2.val = l[i]
            i+=1
            temp2 = temp2.next
        
        return head