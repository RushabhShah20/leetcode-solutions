# Problem: Insert Greatest Common Divisor in Linked List
# Link to the problem: https://leetcode.com/problems/insert-greatest-common-divisors-in-linked-list/

# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next


class Solution:
    def gcd(self, a: int, b: int) -> int:
        return a if b == 0 else self.gcd(b, a % b)

    def insertGreatestCommonDivisors(
        self, head: Optional[ListNode]
    ) -> Optional[ListNode]:
        if head is None or head.next is None:
            return head
        curr: Optional[ListNode] = head
        while curr is not None and curr.next is not None:
            temp: Optional[ListNode] = ListNode(
                self.gcd(curr.val, curr.next.val),
                curr.next,
            )
            curr.next = temp
            curr = temp.next
        return head
