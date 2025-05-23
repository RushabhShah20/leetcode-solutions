// Problem: Find Indices With Index and Value Difference I
// Link to the problem: https://leetcode.com/problems/find-indices-with-index-and-value-difference-i/
impl Solution {
    pub fn find_indices(nums: Vec<i32>, index_difference: i32, value_difference: i32) -> Vec<i32> {
        let mut ans: Vec<i32> = vec![-1, -1];
        for i in 0..nums.len() {
            for j in 0..nums.len() {
                if ((((i - j) as i32).abs() >= index_difference)
                    && ((nums[i] - nums[j]).abs() >= value_difference))
                {
                    ans[0] = i as i32;
                    ans[1] = j as i32;
                    break;
                }
            }
        }
        return ans;
    }
}
