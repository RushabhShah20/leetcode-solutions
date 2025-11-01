// Problem: Delete Nodes From Linked List Present in Array
// Link to the problem: https://leetcode.com/problems/delete-nodes-from-linked-list-present-in-array/
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
    ListNode *modifiedList(vector<int> &nums, ListNode *head)
    {
        if (head == NULL)
        {
            return head;
        }
        ListNode *dummy = new ListNode(0, head);
        ListNode *curr = dummy;
        set<int> s(nums.begin(), nums.end());
        while (curr->next != NULL)
        {
            if (s.find(curr->next->val) != s.end())
            {
                curr->next = curr->next->next;
            }
            else
            {
                curr = curr->next;
            }
        }
        return dummy->next;
    }
};