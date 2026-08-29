// Problem: Make Lexicographically Smallest Array by Swapping Elements
// Link to the problem: https://leetcode.com/problems/make-lexicographically-smallest-array-by-swapping-elements/
class Solution
{
public:
    vector<int> lexicographicallySmallestArray(vector<int> &nums, int limit)
    {
        const int n = nums.size();
        vector<int> a(nums);
        sort(a.begin(), a.end());
        int x = 0;
        unordered_map<int, int> b;
        b[a[0]] = x;
        unordered_map<int, deque<int>> c;
        c[x] = {a[0]};
        for (int i = 1; i < n; i++)
        {
            if (abs(a[i] - a[i - 1]) > limit)
            {
                x++;
            }
            b[a[i]] = x;
            c[x].push_back(a[i]);
        }
        for (int i = 0; i < n; i++)
        {
            const int y = nums[i], z = b[y];
            nums[i] = c[z].front();
            c[z].pop_front();
        }
        return nums;
    }
};