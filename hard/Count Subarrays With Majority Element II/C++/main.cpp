// Problem: Count Subarrays With Majority Element II
// Link to the problem: https://leetcode.com/problems/count-subarrays-with-majority-element-ii/
class Solution
{
public:
    long long merge(vector<long long> &nums, int l, int m, int r, vector<long long> &temp)
    {
        long long count = 0;
        int i = l, j = m + 1, k = l;
        while (i <= m && j <= r)
        {
            if (nums[i] < nums[j])
            {
                count += (long long)(r - j + 1);
                temp[k++] = nums[i++];
            }
            else
            {
                temp[k++] = nums[j++];
            }
        }
        while (i <= m)
        {
            temp[k++] = nums[i++];
        }
        while (j <= r)
        {
            temp[k++] = nums[j++];
        }
        for (int p = l; p <= r; p++)
        {
            nums[p] = temp[p];
        }
        return count;
    }
    long long mergeSort(vector<long long> &nums, int l, int r, vector<long long> &temp)
    {
        long long count = 0;
        if (l < r)
        {
            int m = l + (r - l) / 2;
            count += mergeSort(nums, l, m, temp);
            count += mergeSort(nums, m + 1, r, temp);
            count += merge(nums, l, m, r, temp);
        }
        return count;
    }
    long long countMajoritySubarrays(vector<int> &nums, int target)
    {
        int n = nums.size();
        long long ans = 0;
        vector<long long> prefix(n + 1);
        prefix[0] = 0;
        for (int i = 0; i < n; i++)
        {
            prefix[i + 1] = prefix[i] + (nums[i] == target ? 1 : -1);
        }
        vector<long long> temp(n + 1);
        ans = mergeSort(prefix, 0, n, temp);
        return ans;
    }
};