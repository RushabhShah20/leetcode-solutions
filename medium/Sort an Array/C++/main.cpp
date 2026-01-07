// Problem: Sort an Array
// Link to the problem: https://leetcode.com/problems/sort-an-array/
class Solution
{
public:
    void countingSort(vector<int> &nums, int e)
    {
        const int n = nums.size();
        vector<int> output(n);
        vector<int> count(10, 0);
        for (int i = 0; i < n; i++)
        {
            int digit = (nums[i] / e) % 10;
            count[digit]++;
        }
        for (int i = 1; i < 10; i++)
        {
            count[i] += count[i - 1];
        }
        for (int i = n - 1; i >= 0; i--)
        {
            int digit = (nums[i] / e) % 10;
            output[count[digit] - 1] = nums[i];
            count[digit]--;
        }
        for (int i = 0; i < n; i++)
        {
            nums[i] = output[i];
        }
    }
    void radixSort(vector<int> &nums)
    {
        int maxExp = *max_element(nums.begin(), nums.end());
        int exp = 1;
        while (maxExp / exp > 0)
        {
            countingSort(nums, exp);
            exp *= 10;
        }
    }
    vector<int> sortArray(vector<int> &nums)
    {
        const int n = nums.size();
        vector<int> neg, pos;
        for (const int &num : nums)
        {
            if (num < 0)
            {
                neg.push_back(-1 * num);
            }
            else
            {
                pos.push_back(num);
            }
        }
        if (pos.size() != 0)
        {
            radixSort(pos);
        }
        if (neg.size() != 0)
        {
            radixSort(neg);
        }
        const int m = neg.size();
        for (int i = 0; i < m; i++)
        {
            nums[i] = -1 * neg[m - 1 - i];
        }
        for (int i = m; i < n; i++)
        {
            nums[i] = pos[i - m];
        }
        return nums;
    }
};