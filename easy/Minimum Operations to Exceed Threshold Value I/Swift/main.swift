// Problem: Minimum Operations to Exceed Threshold Value I
// Link to the problem: https://leetcode.com/problems/minimum-operations-to-exceed-threshold-value-i/
class Solution {
    func minOperations(_ nums: [Int], _ k: Int) -> Int {
        var ans = 0;
        for i in (0..<nums.count)
        {
            if (nums[i] < k)
            {
                ans+=1;
            }
        }
        return ans;
    }
}