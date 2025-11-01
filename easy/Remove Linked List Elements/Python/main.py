# Problem: Remove Linked List Elements
# Link to the problem: https://leetcode.com/problems/remove-linked-list-elements/
# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def removeElements(self, head: Optional[ListNode], val: int) -> Optional[ListNode]:
        if head == None:
            return head
        dummy: Optional[ListNode] = ListNode(0, head)
        cur: Optional[ListNode] = dummy
        while cur.next != None:
            if cur.next.val == val:
                cur.next = cur.next.next
            else:
                cur = cur.next
        return dummy.next
