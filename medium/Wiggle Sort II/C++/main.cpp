// Problem: Wiggle Sort II
// Link to the problem: https://leetcode.com/problems/wiggle-sort-ii/
class Solution
{
public:
    void wiggleSort(vector<int> &nums)
    {
        const int n = nums.size();
        vector<int> bucket(5001);
        for (const int &v : nums)
        {
            bucket[v]++;
        }
        int j = 5000;
        for (int i = 1; i < n; i += 2)
        {
            while (bucket[j] == 0)
            {
                j--;
            }
            nums[i] = j;
            bucket[j]--;
        }
        for (int i = 0; i < n; i += 2)
        {
            while (bucket[j] == 0)
            {
                j--;
            }
            nums[i] = j;
            bucket[j]--;
        }
    }
};