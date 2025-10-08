// Problem: Range Sum of Sorted Subarray Sums
// Link to the problem: https://leetcode.com/problems/range-sum-of-sorted-subarray-sums/
impl Solution {
    pub fn range_sum(nums: Vec<i32>, n: i32, left: i32, right: i32) -> i32 {
        let mut ans: i32 = 0;
        let MOD: i32 = 1000000007;
        let mut prefixSum: Vec<i32> = Vec::new();
        for i in 0..nums.len() {
            let mut sum: i32 = nums[i];
            prefixSum.push(sum);
            for j in i + 1..nums.len() {
                sum = ((sum + nums[j]) % MOD);
                prefixSum.push(sum);
            }
        }
        prefixSum.sort();
        for i in left - 1..right {
            ans = ((ans + prefixSum[i as usize]) % MOD);
        }
        return ans;
    }
}
