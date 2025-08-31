// Problem: Restore Finishing Order
// Link to the problem: https://leetcode.com/problems/restore-finishing-order/
class Solution
{
public:
    vector<int> recoverOrder(vector<int> &order, vector<int> &friends)
    {
        for (int i = order.size() - 1; i >= 0; i--)
        {
            if (find(friends.begin(), friends.end(), order[i]) == friends.end())
            {
                order.erase(order.begin() + i);
            }
        }
        return order;
    }
};