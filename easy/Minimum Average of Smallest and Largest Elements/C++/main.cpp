// Problem: Minimum Average of Smallest and Largest Elements
// Link to the problem: https://leetcode.com/problems/minimum-average-of-smallest-and-largest-elements/
class Solution
{
public:
    double minimumAverage(vector<int> &nums)
    {
        vector<double> ans;
        while (nums.size() != 0)
        {
            int x = *min_element(nums.begin(), nums.end());
            nums.erase(min_element(nums.begin(), nums.end()));
            int y = *max_element(nums.begin(), nums.end());
            nums.erase(max_element(nums.begin(), nums.end()));
            double z = ((double)x + (double)y) / 2;
            ans.push_back(z);
        }
        return *min_element(ans.begin(), ans.end());
    }
};