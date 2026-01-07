// Problem: Contains Duplicate III
// Link to the problem: https://leetcode.com/problems/contains-duplicate-iii/
class Solution
{
public:
    bool containsNearbyAlmostDuplicate(vector<int> &nums, int indexDiff, int valueDiff)
    {
        const int n = nums.size();
        unordered_map<int, int> buckets;
        for (int i = 0; i < n; i++)
        {
            int bucket = ((nums[i]) / (valueDiff + 1));
            if (nums[i] < 0)
            {
                bucket--;
            }
            if (buckets.find(bucket) != buckets.end())
            {
                return true;
            }
            else
            {
                buckets[bucket] = nums[i];
                if (buckets.find(bucket - 1) != buckets.end() && abs(nums[i] - buckets[bucket - 1]) <= valueDiff)
                {
                    return true;
                }
                if (buckets.find(bucket + 1) != buckets.end() && abs(nums[i] - buckets[bucket + 1]) <= valueDiff)
                {
                    return true;
                }
                if (buckets.size() > indexDiff)
                {
                    int x = ((nums[i - indexDiff]) / (valueDiff + 1));
                    if (nums[i - indexDiff] < 0)
                    {
                        x--;
                    }
                    buckets.erase(x);
                }
            }
        }
        return false;
    }
};