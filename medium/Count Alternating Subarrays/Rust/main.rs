// Problem: Count Alternating Subarrays
// Link to the problem: https://leetcode.com/problems/count-alternating-subarrays/
impl Solution {
    pub fn count_alternating_subarrays(nums: Vec<i32>) -> i64 {
        let mut ans: i64 = 0;
        let mut count: i32 = 1;
        let mut a: Vec<i32> = Vec::new();
        for i in 1..nums.len() {
            if (nums[i] != nums[i - 1]) {
                count += 1;
            } else {
                a.push(count);
                count = 1;
            }
        }
        a.push(count);
        for i in 0..a.len() {
            ans += (((a[i] as i64) * ((a[i] + 1) as i64)) / 2);
        }
        return ans;
    }
}
