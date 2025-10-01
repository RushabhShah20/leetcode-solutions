// Problem: Reduce Array Size to The Half
// Link to the problem: https://leetcode.com/problems/reduce-array-size-to-the-half/
class Solution
{
public:
    int minSetSize(vector<int> &arr)
    {
        int ans = 0, count = 0, n = arr.size();
        map<int, int> x;
        for (int a : arr)
        {
            x[a]++;
        }
        vector<pair<int, int>> y;
        for (pair<int, int> i : x)
        {
            y.push_back({i.first, i.second});
        }
        sort(y.begin(), y.end(), [](const pair<int, int> &a, const pair<int, int> &b)
             { return a.second > b.second; });
        for (pair<int, int> i : y)
        {
            if (2 * count < n)
            {
                count += i.second;
                ans++;
            }
            else
            {
                break;
            }
        }
        return ans;
    }
};