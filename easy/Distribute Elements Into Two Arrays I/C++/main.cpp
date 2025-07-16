// Problem: Distribute Elements Into Two Arrays I
// Link to the problem: https://leetcode.com/problems/distribute-elements-into-two-arrays-i/
class Solution
{
public:
    vector<int> resultArray(vector<int> &nums)
    {
        vector<int> arr1, arr2, ans;
        arr1.push_back(nums.front());
        nums.erase(nums.begin());
        arr2.push_back(nums.front());
        nums.erase(nums.begin());
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            if (arr1.back() > arr2.back())
            {
                arr1.push_back(nums[i]);
            }
            else
            {
                arr2.push_back(nums[i]);
            }
        }
        ans.insert(ans.end(), arr1.begin(), arr1.end());
        ans.insert(ans.end(), arr2.begin(), arr2.end());
        return ans;
    }
};