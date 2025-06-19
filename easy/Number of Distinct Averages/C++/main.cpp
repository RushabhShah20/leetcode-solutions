// Problem: Number of Distinct Averages
// Link to the problem: https://leetcode.com/problems/number-of-distinct-averages/
class Solution
{
public:
    int distinctAverages(vector<int> &nums)
    {
        set<double> s;
        while (nums.size() != 0)
        {
            int x = *min_element(nums.begin(), nums.end());
            nums.erase(min_element(nums.begin(), nums.end()));
            int y = *max_element(nums.begin(), nums.end());
            nums.erase(max_element(nums.begin(), nums.end()));
            s.insert((x + y) / 2.0);
        }
        return s.size();
    }
};