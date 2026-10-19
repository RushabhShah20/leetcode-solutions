// Problem: Find Target Indices After Sorting Array
// Link to the problem: https://leetcode.com/problems/find-target-indices-after-sorting-array/
impl Solution {
    pub fn target_indices(nums: Vec<i32>, target: i32) -> Vec<i32> {
        let n: usize = nums.len();
        let mut x: i32 = 0;
        let mut y: i32 = 0;
        for i in 0..n {
            if (nums[i] < target) {
                x += 1;
            } else if (nums[i] == target) {
                y += 1;
            }
        }
        let mut ans: Vec<i32> = Vec::new();
        for i in x..x + y {
            ans.push(i);
        }
        return ans;
    }
}
