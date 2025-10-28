// Problem: Make Array Elements Equal to Zero
// Link to the problem: https://leetcode.com/problems/make-array-elements-equal-to-zero/
class Solution
{
public:
    bool check(vector<int> &nums)
    {
        for (int num : nums)
        {
            if (num != 0)
            {
                return false;
            }
        }
        return true;
    }
    int countValidSelections(vector<int> &nums)
    {
        int ans = 0, n = nums.size();
        vector<int> a;
        for (int i = 0; i < n; i++)
        {
            if (nums[i] == 0)
            {
                a.push_back(i);
            }
        }
        for (int i = 0; i < a.size(); i++)
        {
            int curr = a[i];
            vector<int> x = nums;
            bool move = true;
            while (curr >= 0 && curr < n)
            {
                if (x[curr] == 0)
                {
                    if (move)
                    {
                        curr++;
                    }
                    else
                    {
                        curr--;
                    }
                }
                else if (x[curr] > 0)
                {
                    x[curr]--;
                    if (move)
                    {
                        move = !move;
                        curr--;
                    }
                    else
                    {
                        move = !move;
                        curr++;
                    }
                }
            }
            if (check(x))
            {
                ans++;
            }
            curr = a[i];
            x = nums;
            move = false;
            while (curr >= 0 && curr < n)
            {
                if (x[curr] == 0)
                {
                    if (move)
                    {
                        curr++;
                    }
                    else
                    {
                        curr--;
                    }
                }
                else if (x[curr] > 0)
                {
                    x[curr]--;
                    if (move)
                    {
                        move = !move;
                        curr--;
                    }
                    else
                    {
                        move = !move;
                        curr++;
                    }
                }
            }
            if (check(x))
            {
                ans++;
            }
        }
        return ans;
    }
};