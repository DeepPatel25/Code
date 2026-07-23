class Solution(object):
    def findMedianSortedArrays(self, nums1, nums2):
        """
        :type nums1: List[int]
        :type nums2: List[int]
        :rtype: float
        """
        
        li=[]
        for i in nums1:
            li.append(i)
            
        for i in nums2:
            li.append(i)
            
        li.sort()
        
        if(len(li)%2==1):
            a = li[(len(li) - 1)/2]
            return a
        else:
            a = (li[len(li)/2] + li[len(li)/2-1]) / 2
            return a