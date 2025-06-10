// Problem: Minimum Number Game
// Link to the problem: https://leetcode.com/problems/minimum-number-game/
class Solution
{
public:
    vector<int> numberGame(vector<int> &nums)
    {
        vector<int> ans;
        while (nums.size() != 0)
        {
            int x = *min_element(nums.begin(), nums.end());
            nums.erase(min_element(nums.begin(), nums.end()));
            int y = *min_element(nums.begin(), nums.end());
            nums.erase(min_element(nums.begin(), nums.end()));
            ans.push_back(y);
            ans.push_back(x);
        }
        return ans;
    }
};