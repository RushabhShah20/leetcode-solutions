// Problem: Rotate List
// Link to the problem: https://leetcode.com/problems/rotate-list/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
    ListNode *rotateRight(ListNode *head, int k)
    {
        if (!head || !head->next || k == 0)
        {
            return head;
        }
        ListNode *tail = head;
        int n = 1;
        while (tail->next)
        {
            tail = tail->next;
            n++;
        }
        k %= n;
        if (k == 0)
        {
            return head;
        }
        tail->next = head;
        const int m = n - k;
        ListNode *y = head;
        for (int i = 0; i < m - 1; i++)
        {
            y = y->next;
        }
        ListNode *ans = y->next;
        y->next = nullptr;
        return ans;
    }
};