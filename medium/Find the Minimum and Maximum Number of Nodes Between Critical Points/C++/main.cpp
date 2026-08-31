// Problem: Find the Minimum and Maximum Number of Nodes Between Critical Points
// Link to the problem: https://leetcode.com/problems/find-the-minimum-and-maximum-number-of-nodes-between-critical-points/
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
    vector<int> nodesBetweenCriticalPoints(ListNode *head)
    {
        vector<int> ans = {-1, -1};
        int mn = 100001;
        const ListNode *prev = head, *curr = head->next;
        int k = 1, j = 0, i = 0;
        while (curr->next != nullptr)
        {
            if ((curr->val < prev->val && curr->val < curr->next->val) || (curr->val > prev->val && curr->val > curr->next->val))
            {
                if (j == 0)
                {
                    j = k;
                    i = k;
                }
                else
                {
                    mn = min(mn, k - j);
                    j = k;
                }
            }
            k++;
            prev = curr;
            curr = curr->next;
        }
        if (mn != 100001)
        {
            const int mx = j - i;
            ans = {mn, mx};
        }
        return ans;
    }
};