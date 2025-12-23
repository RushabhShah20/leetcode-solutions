// Problem: Find Xor-Beauty of Array
// Link to the problem: https://leetcode.com/problems/find-xor-beauty-of-array/
impl Solution {
    pub fn xor_beauty(nums: Vec<i32>) -> i32 {
        let mut ans: i32 = 0;
        for num in nums {
            ans ^= num;
        }
        return ans;
    }
}
