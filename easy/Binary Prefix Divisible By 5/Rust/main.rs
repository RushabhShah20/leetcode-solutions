// Problem: Binary Prefix Divisible By 5
// Link to the problem: https://leetcode.com/problems/binary-prefix-divisible-by-5/
impl Solution {
    pub fn prefixes_div_by5(nums: Vec<i32>) -> Vec<bool> {
        let mut rem: i32 = 0;
        let mut ans: Vec<bool> = Vec::new();
        for num in nums {
            rem = (2 * rem + num) % 5;
            if (rem == 0) {
                ans.push(true);
            } else {
                ans.push(false);
            }
        }
        return ans;
    }
}
