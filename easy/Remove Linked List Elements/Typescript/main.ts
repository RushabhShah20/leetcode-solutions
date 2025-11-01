// Problem: Remove Linked List Elements
// Link to the problem: https://leetcode.com/problems/remove-linked-list-elements/
/**
 * Definition for singly-linked list.
 * class ListNode {
 *     val: number
 *     next: ListNode | null
 *     constructor(val?: number, next?: ListNode | null) {
 *         this.val = (val===undefined ? 0 : val)
 *         this.next = (next===undefined ? null : next)
 *     }
 * }
 */

function removeElements(head: ListNode | null, val: number): ListNode | null {
    if (head === null) {
        return head;
    }
    let dummy: ListNode | null = new ListNode(0, head);
    let cur: ListNode | null = dummy;
    while (cur.next !== null) {
        if (cur.next.val === val) {
            cur.next = cur.next.next;
        } else {
            cur = cur.next;
        }
    }
    return dummy.next;
};