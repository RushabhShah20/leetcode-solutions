// Problem: Insert Greatest Common Divisor in Linked List
// Link to the problem: https://leetcode.com/problems/insert-greatest-common-divisors-in-linked-list/

// struct ListNode
// {
//     int val;
//     ListNode *next;
//     ListNode() : val(0), next(nullptr) {}
//     ListNode(int x) : val(x), next(nullptr) {}
//     ListNode(int x, ListNode *next) : val(x), next(next) {}
// };

class Solution
{
public:
    int gcd(int a, int b)
    {
        return b == 0 ? a : gcd(b, a % b);
    }
    ListNode *insertGreatestCommonDivisors(ListNode *head)
    {
        if (head == NULL || head->next == NULL)
        {
            return head;
        }

        ListNode *cur = head;
        while (cur != NULL && cur->next != NULL)
        {
            ListNode *temp = new ListNode(gcd(cur->val, cur->next->val), cur->next);
            cur->next = temp;
            cur = temp->next;
        }

        return head;
    }
};
