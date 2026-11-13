''' 
Structure of a Binary Search Tree node
class Node:
    def __init__(self, val):
        self.data = val
        self.left = None
        self.right = None
'''

class Solution:
    def findCommon(self, r1, r2):
        a = []
        b = []

        def inorder(node, arr):
            if node is None:
                return

            inorder(node.left, arr)
            arr.append(node.data)
            inorder(node.right, arr)

        inorder(r1, a)
        inorder(r2, b)

        i = 0
        j = 0
        ans = []

        while i < len(a) and j < len(b):

            if a[i] == b[j]:
                ans.append(a[i])
                i += 1
                j += 1

            elif a[i] < b[j]:
                i += 1

            else:
                j += 1

        return ans
