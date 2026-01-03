// Problem: Find Score of an Array After Marking All Elements
// Link to the problem: https://leetcode.com/problems/find-score-of-an-array-after-marking-all-elements/
class Compare
{
public:
    bool operator()(const pair<int, int> &a, const pair<int, int> &b)
    {
        if (a.first == b.first)
        {
            return a.second > b.second;
        }
        else
        {
            return a.first > b.first;
        }
    }
};
class Solution
{
public:
    long long findScore(vector<int> &nums)
    {
        const int n = nums.size();
        long long ans = 0;
        vector<bool> marked(n, false);
        priority_queue<pair<int, int>, vector<pair<int, int>>, Compare> pq;
        for (int i = 0; i < n; i++)
        {
            pq.push(make_pair(nums[i], i));
        }
        while (!pq.empty())
        {
            pair<int, int> x = pq.top();
            pq.pop();
            if (marked[x.second] == false)
            {
                ans += x.first;
                marked[x.second] = true;
                if (x.second > 0)
                {
                    marked[x.second - 1] = true;
                }
                if (x.second < n - 1)
                {
                    marked[x.second + 1] = true;
                }
            }
        }
        return ans;
    }
};