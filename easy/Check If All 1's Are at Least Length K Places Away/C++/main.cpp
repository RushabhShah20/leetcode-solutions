// Problem: Check If All 1's Are at Least Length K Places Away
// Link to the problem: https://leetcode.com/problems/check-if-all-1s-are-at-least-length-k-places-away/
class Solution
{
public:
    bool kLengthApart(vector<int> &nums, int k)
    {
        vector<int> pos;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 1)
            {
                pos.push_back(i);
            }
        }
        int minDiff = INT_MAX;
        if (pos.size() == 0)
        {
            return true;
        }
        else
        {
            for (int i = 1; i < pos.size(); i++)
            {
                minDiff = min(minDiff, abs(pos[i] - pos[i - 1] - 1));
            }
            if (minDiff < k)
            {
                return false;
            }
            else
            {
                return true;
            }
        }
    }
};