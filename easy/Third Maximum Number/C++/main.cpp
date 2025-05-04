// Problem: Third Maximum Number
// Link to the problem: https://leetcode.com/problems/third-maximum-number/
class Solution
{
public:
    int thirdMax(vector<int> &nums)
    {
        set<int> s;
        for (int i = 0; i < nums.size(); i++)
        {
            s.insert(nums[i]);
        }
        if (s.size() <= 2)
        {
            return *max_element(s.begin(), s.end());
        }
        else
        {
            set<int>::iterator it = s.begin();
            advance(it, s.size() - 3);
            return *it;
        }
    }
};