// Problem: Construct Uniform Parity Array II
// Link to the problem: https://leetcode.com/problems/construct-uniform-parity-array-ii/
impl Solution {
    pub fn uniform_array(nums1: Vec<i32>) -> bool {
        let n: usize = nums1.len();
        let mut x: bool = true;
        let mut mn: i32 = 1000000001;
        for i in 0..n {
            let num: i32 = nums1[i];
            if (num & 1 == 1) {
                x = false;
            }
            mn = mn.min(num);
        }
        let ans: bool = if (mn & 1 == 1 || x) { true } else { false };
        return ans;
    }
}
