// Problem: Delete Nodes From Linked List Present in Array
// Link to the problem: https://leetcode.com/problems/delete-nodes-from-linked-list-present-in-array/
/**
 * Definition for singly-linked list.
 * public class ListNode {
 * int val;
 * ListNode next;
 * ListNode() {}
 * ListNode(int val) { this.val = val; }
 * ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode modifiedList(int[] nums, ListNode head) {
        if (head == null) {
            return head;
        }
        ListNode dummy = new ListNode(0, head);
        ListNode curr = dummy;
        Set<Integer> s = new HashSet<>();
        for (int num : nums) {
            s.add(num);
        }
        while (curr.next != null) {
            if (s.contains(curr.next.val)) {
                curr.next = curr.next.next;
            } else {
                curr = curr.next;
            }
        }
        return dummy.next;
    }
}