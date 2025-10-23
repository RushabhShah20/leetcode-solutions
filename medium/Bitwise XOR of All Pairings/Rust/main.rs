// Problem: Bitwise XOR of All Pairings
// Link to the problem: https://leetcode.com/problems/bitwise-xor-of-all-pairings/
impl Solution {
    pub fn xor_all_nums(nums1: Vec<i32>, nums2: Vec<i32>) -> i32 {
        let m: usize = nums1.len();
        let n: usize = nums2.len();
        if (m % 2 == 0) {
            if (n % 2 == 0) {
                return 0;
            } else {
                let mut ans: i32 = 0;
                for num in nums1 {
                    ans ^= num;
                }
                return ans;
            }
        } else {
            if (n % 2 == 0) {
                let mut ans: i32 = 0;
                for num in nums2 {
                    ans ^= num;
                }
                return ans;
            } else {
                let mut x: i32 = 0;
                let mut y: i32 = 0;
                for num in nums1 {
                    x ^= num;
                }
                for num in nums2 {
                    y ^= num;
                }
                let ans: i32 = x ^ y;
                return ans;
            }
        }
    }
}
