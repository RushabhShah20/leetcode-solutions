# Problem: Delete Nodes From Linked List Present in Array
# Link to the problem: https://leetcode.com/problems/delete-nodes-from-linked-list-present-in-array/
# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def modifiedList(
        self, nums: List[int], head: Optional[ListNode]
    ) -> Optional[ListNode]:
        if head == None:
            return head
        dummy: Optional[ListNode] = ListNode(0, head)
        curr: Optional[ListNode] = dummy
        s: Set[int] = set([])
        for num in nums:
            s.add(num)
        while curr.next != None:
            if curr.next.val in s:
                curr.next = curr.next.next
            else:
                curr = curr.next
        return dummy.next
