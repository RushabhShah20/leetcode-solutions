// Problem: Divide an Array Into Subarrays With Minimum Cost II
// Link to the problem: https://leetcode.com/problems/divide-an-array-into-subarrays-with-minimum-cost-ii/
class OrderedSet
{
public:
    multiset<int> low, high;
    int dist, k;
    long long sum;
    OrderedSet(const int dist, const int k)
    {
        sum = 0;
        this->dist = dist;
        this->k = k;
    }
    void balance()
    {
        while (!high.empty() && low.size() < k - 1)
        {
            multiset<int>::iterator it = high.begin();
            low.insert(*it);
            sum += (*it);
            high.erase(it);
        }
        while (low.size() > k - 1)
        {
            multiset<int>::reverse_iterator it = low.rbegin();
            high.insert(*it);
            sum -= (*it);
            low.erase(low.find(*it));
        }
    }
    void insert(const int x)
    {
        if (!high.empty() && *high.begin() <= x)
        {
            high.insert(x);
        }
        else
        {
            low.insert(x);
            sum += x;
        }
        balance();
    }
    void remove(const int x)
    {
        if (low.find(x) != low.end())
        {
            low.erase(low.find(x));
            sum -= x;
        }
        else
        {
            high.erase(high.find(x));
        }
        balance();
    }
};
class Solution
{
public:
    long long minimumCost(vector<int> &nums, int k, int dist)
    {
        long long ans = 1e18;
        const int n = nums.size();
        OrderedSet s(dist, k);
        for (int i = 1; i < n; i++)
        {
            s.insert(nums[i]);
            if (i - dist - 1 > 0)
            {
                s.remove(nums[i - dist - 1]);
            }
            if (s.low.size() == k - 1)
            {
                ans = min(ans, s.sum + nums[0]);
            }
        }
        return ans;
    }
};
