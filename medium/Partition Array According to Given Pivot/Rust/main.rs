// Problem: Partition Array According to Given Pivot
// Link to the problem: https://leetcode.com/problems/partition-array-according-to-given-pivot/
impl Solution {
    pub fn pivot_array(nums: Vec<i32>, pivot: i32) -> Vec<i32> {
        let mut ans: Vec<i32> = Vec::new();
        let mut less: Vec<i32> = Vec::new();
        let mut equal: Vec<i32> = Vec::new();
        let mut greater: Vec<i32> = Vec::new();
        for i in 0..nums.len() {
            if nums[i] < pivot {
                less.push(nums[i]);
            } else if nums[i] > pivot {
                greater.push(nums[i]);
            } else {
                equal.push(nums[i]);
            }
        }
        ans.extend(less);
        ans.extend(equal);
        ans.extend(greater);
        return ans;
    }
}
