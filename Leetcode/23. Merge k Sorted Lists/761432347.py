# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def mergeKLists(self, lists):
        """
        :type lists: List[ListNode]
        :rtype: ListNode
        """
        if len(lists)==0:
            return None
        
        if len(lists)==1:
            return lists[0]
        
        l = []

        for i in lists:
            if i:
                while i:
                    l.append(i.val)
                    i = i.next
                
        l.sort()
        
        head2 = ListNode(-1, None)
        temp2 = head2
        
        for i in l:
            node = ListNode(i, None)
            temp2.next = node
            temp2 = temp2.next
        
        return head2.next
        