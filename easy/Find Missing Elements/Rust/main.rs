// Problem: Find Missing Elements
// Link to the problem: https://leetcode.com/problems/find-missing-elements/
impl Solution {
    pub fn find_missing_elements(nums: Vec<i32>) -> Vec<i32> {
        let n: usize = nums.len();
        let mut mn: i32 = 101;
        let mut mx: i32 = 1;
        for i in 0..n {
            mn = mn.min(nums[i]);
            mx = mx.max(nums[i]);
        }
        let m: usize = (mx - mn + 1) as usize;
        let mut a: Vec<i32> = vec![0; m];
        for i in 0..n {
            a[(nums[i] - mn) as usize] += 1;
        }
        let mut ans: Vec<i32> = Vec::new();
        for i in 0..m {
            if (a[i] == 0) {
                ans.push(i as i32 + mn);
            }
        }
        return ans;
    }
}
