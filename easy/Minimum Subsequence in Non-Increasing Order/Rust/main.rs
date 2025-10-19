// Problem: Minimum Subsequence in Non-Increasing Order
// Link to the problem: https://leetcode.com/problems/minimum-subsequence-in-non-increasing-order/
impl Solution {
    pub fn min_subsequence(nums: Vec<i32>) -> Vec<i32> {
        let mut arr: Vec<i32> = nums;
        arr.sort();
        arr.reverse();
        let mut sum: i32 = 0;
        for num in &arr {
            sum += *num;
        }
        let mut a: i32 = 0;
        let mut ans: Vec<i32> = Vec::new();
        for num in &arr {
            a += *num;
            if (a > sum - a) {
                ans.push(*num);
                break;
            } else {
                ans.push(*num);
            }
        }
        return ans;
    }
}
