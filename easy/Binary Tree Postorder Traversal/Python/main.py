# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def postOrder(self, root: Optional[TreeNode], ans: List[int]):
        if root == None:
            return
        self.postOrder(root.left, ans)
        self.postOrder(root.right, ans)
        ans.append(root.val)

    def postorderTraversal(self, root: Optional[TreeNode]) -> List[int]:
        ans: List[int] = []
        self.postOrder(root, ans)
        return ans
