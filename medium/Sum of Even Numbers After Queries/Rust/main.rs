// Problem: Sum of Even Numbers After Queries
// Link to the problem: https://leetcode.com/problems/sum-of-even-numbers-after-queries/
impl Solution {
    pub fn sum_even_after_queries(mut nums: Vec<i32>, queries: Vec<Vec<i32>>) -> Vec<i32> {
        let mut sum: i32 = 0;
        for i in 0..nums.len() {
            if (nums[i] % 2 == 0) {
                sum += nums[i];
            }
        }
        let mut ans: Vec<i32> = vec![0; queries.len()];
        for i in 0..queries.len() {
            if (nums[queries[i][1] as usize] % 2 == 0) {
                if ((nums[queries[i][1] as usize] + queries[i][0]) % 2 == 0) {
                    sum += queries[i][0];
                    nums[queries[i][1] as usize] += queries[i][0];
                } else {
                    sum -= nums[queries[i][1] as usize];
                    nums[queries[i][1] as usize] += queries[i][0];
                }
            } else {
                if ((nums[queries[i][1] as usize] + queries[i][0]) % 2 == 0) {
                    sum += (nums[queries[i][1] as usize] + queries[i][0]);
                    nums[queries[i][1] as usize] += queries[i][0];
                } else {
                    nums[queries[i][1] as usize] += queries[i][0];
                }
            }
            ans[i] = sum;
        }
        return ans;
    }
}
