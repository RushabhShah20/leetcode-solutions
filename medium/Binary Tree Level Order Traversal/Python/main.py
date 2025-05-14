# Problem: Binary Tree Level Order Traversal
# Link to the problem: https://leetcode.com/problems/binary-tree-level-order-traversal/
# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def levelOrderTraversal(
        self, root: Optional[TreeNode], level: int, res: List[List[int]]
    ):
        if root == None:
            return
        if len(res) <= level:
            res.append([])
        res[level].append(root.val)
        self.levelOrderTraversal(root.left, level + 1, res)
        self.levelOrderTraversal(root.right, level + 1, res)

    def levelOrder(self, root: Optional[TreeNode]) -> List[List[int]]:
        ans: List[List[int]] = []
        self.levelOrderTraversal(root, 0, ans)
        return ans
