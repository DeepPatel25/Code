class Solution:
    def maximumStrongPairXor(self, nums: List[int]) -> int:
        nums.sort()
        i = j = result = 0
        trie = Trie()
        for j in range(len(nums)):
            trie.insert(nums[j])
            while i < j and nums[j] - nums[i] > nums[i]:
                trie.delete(nums[i])
                i += 1
            result = max(result, trie.find_max(nums[j]))
        
        return result

class Trie:
    def __init__(self):
        self.root = TrieNode()
    
    def insert(self, value):
        self.traverse_and_apply(value, 1)
    
    def delete(self, value):
        self.traverse_and_apply(value, -1)
    
    def traverse_and_apply(self, value, increment):
        bit_string = self.convert(value)
        curr_node = self.root
        for bit in bit_string:
            bit = int(bit)
            if curr_node.children[bit] is None and increment == 1:
                curr_node.children[bit] = TrieNode()
            curr_node = curr_node.children[bit]
            curr_node.count += increment
    
    def convert(self, value):
        bit_string = bin(value)[2:]
        if len(bit_string) < 20:
            bit_string = "0" * (20 - len(bit_string)) + bit_string
        return bit_string

    def find_max(self, value):
        bit_string = self.convert(value)
        curr_node = self.root
        result = 0

        for bit in bit_string:
            bit = int(bit)
            xor_complement = curr_node.children[1 - bit]
            if xor_complement != None and xor_complement.count > 0:
                curr_node = xor_complement
                result = result * 2 + 1
            elif curr_node.children[bit] != None and curr_node.children[bit].count > 0:
                curr_node = curr_node.children[bit]
                result = 2 * result
        
        return result

class TrieNode:
    def __init__(self):
        self.children = [None, None]
        self.count = 0