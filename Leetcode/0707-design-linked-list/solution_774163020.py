class MyLinkedList(object):

    def __init__(self):
        self.list = []

    def get(self, index):
        """
        :type index: int
        :rtype: int
        """
        if index<0 or index>=len(self.list):
            return -1
        return self.list[index]
        

    def addAtHead(self, val):
        """
        :type val: int
        :rtype: None
        """
        self.list = [val] + self.list
        

    def addAtTail(self, val):
        """
        :type val: int
        :rtype: None
        """
        self.list.append(val)

    def addAtIndex(self, index, val):
        """
        :type index: int
        :type val: int
        :rtype: None
        """
        if 0 <= index <= len(self.list):
            self.list = self.list[0:index] + [val] + self.list[index:]
        

    def deleteAtIndex(self, index):
        """
        :type index: int
        :rtype: None
        """
        if 0 <= index < len(self.list):
            self.list.pop(index)


# Your MyLinkedList object will be instantiated and called as such:
# obj = MyLinkedList()
# param_1 = obj.get(index)
# obj.addAtHead(val)
# obj.addAtTail(val)
# obj.addAtIndex(index,val)
# obj.deleteAtIndex(index)