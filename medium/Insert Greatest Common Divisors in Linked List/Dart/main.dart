// Problem: Insert Greatest Common Divisor in Linked List
// Link to the problem: https://leetcode.com/problems/insert-greatest-common-divisors-in-linked-list/

//  * Definition for singly-linked list.
// class ListNode {
//   int val;
//   ListNode? next;
//   ListNode([this.val = 0, this.next]);
// }

class Solution {
  int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
  }

  ListNode? insertGreatestCommonDivisors(ListNode? head) {
    if (head == null || head.next == null) return head;
    ListNode? curr = head;
    while (curr != null && curr.next != null) {
      ListNode? temp = ListNode(gcd(curr.val, curr.next!.val), curr.next);
      curr.next = temp;
      curr = temp.next;
    }
    return head;
  }
}
