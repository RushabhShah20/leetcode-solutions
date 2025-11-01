// Problem: Remove Linked List Elements
// Link to the problem: https://leetcode.com/problems/remove-linked-list-elements/
/**
 * Definition for singly-linked list.
 * class ListNode {
 *   int val;
 *   ListNode? next;
 *   ListNode([this.val = 0, this.next]);
 * }
 */
class Solution {
  ListNode? removeElements(ListNode? head, int val) {
    if (head == null) {
      return head;
    }
    ListNode? dummy = new ListNode(0, head);
    ListNode? cur = dummy;
    while (cur?.next != null) {
      if (cur?.next?.val == val) {
        cur?.next = cur.next?.next;
      } else {
        cur = cur?.next;
      }
    }
    return dummy.next;
  }
}
