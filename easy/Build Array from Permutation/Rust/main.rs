// Problem: Build Array from Permutation
// Link to the problem: https://leetcode.com/problems/build-array-from-permutation/
impl Solution {
    pub fn build_array(nums: Vec<i32>) -> Vec<i32> {
        let mut ans: Vec<i32> = vec![0; nums.len()];
        ans[0] = nums[nums[0] as usize];
        for i in 1..nums.len() {
            ans[i] = nums[nums[i] as usize];
        }
        return ans;
    }
}
