// Problem: Remove Linked List Elements
// Link to the problem: https://leetcode.com/problems/remove-linked-list-elements/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *removeElements(struct ListNode *head, int val)
{
    if (head == NULL)
    {
        return head;
    }
    struct ListNode d = {0, head};
    struct ListNode *dummy = &d;
    struct ListNode *cur = dummy;
    while (cur->next != NULL)
    {
        if (cur->next->val == val)
        {
            cur->next = cur->next->next;
        }
        else
        {
            cur = cur->next;
        }
    }
    return dummy->next;
}