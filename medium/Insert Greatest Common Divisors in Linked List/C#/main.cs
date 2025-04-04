// Problem: Insert Greatest Common Divisor in Linked List
// Link to the problem: https://leetcode.com/problems/insert-greatest-common-divisors-in-linked-list/

/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     public int val;
 *     public ListNode next;
 *     public ListNode(int val=0, ListNode next=null) {
 *         this.val = val;
 *         this.next = next;
 *     }
 * }
 */
public class Solution
{
    public int gcd(int a, int b)
    {
        return b == 0 ? a : gcd(b, a % b);
    }
    public ListNode InsertGreatestCommonDivisors(ListNode head)
    {
        if (head == null || head.next == null)
            return head;
        ListNode curr = head;
        while (curr != null && curr.next != null)
        {
            ListNode temp = new ListNode(gcd(curr.val, curr.next.val), curr.next);
            curr.next = temp;
            curr = temp.next;
        }
        return head;
    }
}