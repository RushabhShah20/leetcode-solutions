// Problem: Insert Greatest Common Divisor in Linked List
// Link to the problem: https://leetcode.com/problems/insert-greatest-common-divisors-in-linked-list/
/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} head
 * @return {ListNode}
 */

var gcd = function (a, b) {
    return b == 0 ? a : gcd(b, a % b);
};

var insertGreatestCommonDivisors = function (head) {
    if (head === null || head.next === null) {
        return head;
    }
    let curr = head;
    while (curr !== null && curr.next !== null) {
        let temp = new ListNode(gcd(curr.val, curr.next.val), curr.next);
        curr.next = temp;
        curr = temp.next;
    }
    return head;
};