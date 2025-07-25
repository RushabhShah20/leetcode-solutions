# Problem: Middle of the Linked List
# Link to the problem: https://leetcode.com/problems/middle-of-the-linked-list/
# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def middleNode(self, head: Optional[ListNode]) -> Optional[ListNode]:
        if head == None or head.next == None:
            return head
        slow: Optional[ListNode] = head
        fast: Optional[ListNode] = head
        while fast != None and fast.next != None:
            slow = slow.next
            fast = fast.next.next
        return slow