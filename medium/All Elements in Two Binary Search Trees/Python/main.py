# Problem: All Elements in Two Binary Search Trees
# Link to the problem: https://leetcode.com/problems/all-elements-in-two-binary-search-trees/F
# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def __init__(self):
        self.ans: List[int] = []

    def insertInArray(self, root: Optional[TreeNode]) -> None:
        if root != None:
            self.ans.append(root.val)
            if root.left != None:
                self.insertInArray(root.left)
            if root.right != None:
                self.insertInArray(root.right)

    def getAllElements(
        self, root1: Optional[TreeNode], root2: Optional[TreeNode]
    ) -> List[int]:
        self.insertInArray(root1)
        self.insertInArray(root2)
        self.ans.sort()
        return self.ans
