# Problem: Leaf-Similar Trees
# Link to the problem: https://leetcode.com/problems/leaf-similar-trees/
# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def inorder(self, root: Optional[TreeNode], ans: List[int]):
        if root == None:
            return
        self.inorder(root.left, ans)
        if root.left == None and root.right == None:
            ans.append(root.val)
        self.inorder(root.right, ans)

    def leafSimilar(self, root1: Optional[TreeNode], root2: Optional[TreeNode]) -> bool:
        ans1: List[int] = []
        ans2: List[int] = []
        self.inorder(root1, ans1)
        self.inorder(root2, ans2)
        return ans1 == ans2
