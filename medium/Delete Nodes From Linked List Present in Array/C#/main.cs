// Problem: Delete Nodes From Linked List Present in Array
// Link to the problem: https://leetcode.com/problems/delete-nodes-from-linked-list-present-in-array/
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
    public ListNode ModifiedList(int[] nums, ListNode head)
    {
        if (head == null)
        {
            return head;
        }
        ListNode dummy = new ListNode(0, head);
        ListNode curr = dummy;
        SortedSet<int> s = new SortedSet<int>();
        foreach (int num in nums)
        {
            s.Add(num);
        }
        while (curr.next != null)
        {
            if (s.Contains(curr.next.val))
            {
                curr.next = curr.next.next;
            }
            else
            {
                curr = curr.next;
            }
        }
        return dummy.next;
    }
}