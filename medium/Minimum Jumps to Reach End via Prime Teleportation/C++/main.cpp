// Problem: Minimum Jumps to Reach End via Prime Teleportation
// Link to the problem: https://leetcode.com/problems/minimum-jumps-to-reach-end-via-prime-teleportation/?
constexpr int mx = 1000001;
vector<vector<int>> a(mx);
bool x = false;
class Solution
{
public:
    int minJumps(vector<int> &nums)
    {
        if (!x)
        {
            for (int i = 2; i < mx; i++)
            {
                if (a[i].empty())
                {
                    for (int j = i; j < mx; j += i)
                    {
                        a[j].push_back(i);
                    }
                }
            }
            x = true;
        }
        const int n = nums.size();
        unordered_map<int, vector<int>> m;
        for (int i = 0; i < n; i++)
        {
            for (const int j : a[nums[i]])
            {
                m[j].push_back(i);
            }
        }
        int ans = 0;
        vector<bool> b(n, false);
        b[0] = true;
        vector<int> q1 = {0};
        while (!q1.empty())
        {
            vector<int> q2;
            for (const int i : q1)
            {
                if (i == n - 1)
                {
                    return ans;
                }
                if (i > 1 && !b[i - 1])
                {
                    b[i - 1] = true;
                    q2.push_back(i - 1);
                }
                if (i < n - 1 && !b[i + 1])
                {
                    b[i + 1] = true;
                    q2.push_back(i + 1);
                }
                if (a[nums[i]].size() == 1 && a[nums[i]][0] == nums[i])
                {
                    for (const int j : m[nums[i]])
                    {
                        if (!b[j])
                        {
                            b[j] = true;
                            q2.push_back(j);
                        }
                    }
                    m[nums[i]].clear();
                }
            }
            q1 = q2;
            ans++;
        }
        return -1;
    }
};