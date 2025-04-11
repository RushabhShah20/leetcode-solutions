// Problem: Insert Greatest Common Divisor in Linked List
// Link to the problem: https://leetcode.com/problems/insert-greatest-common-divisors-in-linked-list/
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

function gcd(a: number, b: number): number {
    return b == 0 ? a : gcd(b, a % b);
}

function insertGreatestCommonDivisors(head: ListNode | null): ListNode | null {
    if (head === null || head.next === null) {
        return head;
    }

    let curr: ListNode | null = head;
    while (curr !== null && curr.next !== null) {
        let temp: ListNode | null = new ListNode(gcd(curr.val, curr.next.val), curr.next);
        curr.next = temp;
        curr = temp.next;
    }
    return head;
};