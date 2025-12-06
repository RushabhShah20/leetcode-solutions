// Problem: Maximum XOR After Operations
// Link to the problem: https://leetcode.com/problems/maximum-xor-after-operations/
impl Solution {
    pub fn maximum_xor(nums: Vec<i32>) -> i32 {
        let mut ans: i32 = 0;
        for num in nums {
            ans |= num;
        }
        return ans;
    }
}
