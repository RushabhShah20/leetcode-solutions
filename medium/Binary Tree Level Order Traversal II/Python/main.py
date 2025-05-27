# Problem: Binary Tree Level Order Traversal II
# Link to the problem: https://leetcode.com/problems/binary-tree-level-order-traversal-ii/
# Definition for a binary tree node.
# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def levelOrder(self, root: Optional[TreeNode], level: int, ans: List[List[int]]):
        if root == None:
            return
        if len(ans) <= level:
            ans.append([])
        ans[level].append(root.val)
        self.levelOrder(root.left, level + 1, ans)
        self.levelOrder(root.right, level + 1, ans)

    def levelOrderBottom(self, root: Optional[TreeNode]) -> List[List[int]]:
        ans: List[List[int]] = []
        self.levelOrder(root, 0, ans)
        ans.reverse()
        return ans
