// Problem: Product of Array Except Self
// Link to the problem: https://leetcode.com/problems/product-of-array-except-self/
impl Solution {
    pub fn product_except_self(nums: Vec<i32>) -> Vec<i32> {
        let mut n: usize = nums.len();
        let mut prefix: Vec<i32> = vec![0; nums.len()];
        let mut suffix: Vec<i32> = vec![0; nums.len()];
        let mut ans: Vec<i32> = vec![0; nums.len()];
        prefix[0] = 1;
        for i in 1..n {
            if (prefix[i - 1] == 0) {
                prefix[i] = 0;
            } else {
                prefix[i] = prefix[i - 1] * nums[i - 1];
            }
        }
        suffix[n - 1] = 1;
        for i in (0..(n - 1)).rev() {
            if (suffix[i + 1] == 0) {
                suffix[i] = 0;
            } else {
                suffix[i] = suffix[i + 1] * nums[i + 1];
            }
        }
        for i in 0..n {
            ans[i] = prefix[i] * suffix[i];
        }
        return ans;
    }
}
