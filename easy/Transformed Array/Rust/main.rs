// Problem: Transformed Array
// Link to the problem: https://leetcode.com/problems/transformed-array/
impl Solution {
    pub fn construct_transformed_array(nums: Vec<i32>) -> Vec<i32> {
        let n: i32 = nums.len() as i32;
        let mut ans: Vec<i32> = vec![0; n as usize];
        for i in 0..n {
            ans[i as usize] = nums[((i + nums[i as usize] % n + n) % n) as usize];
        }
        return ans;
    }
}
