// Problem: Find Minimum Operations to Make All Elements Divisible by Three
// Link to the problem: https://leetcode.com/problems/find-minimum-operations-to-make-all-elements-divisible-by-three/
impl Solution {
    pub fn minimum_operations(nums: Vec<i32>) -> i32 {
        let mut ans: i32 = 0;
        for num in nums {
            if (num % 3 != 0) {
                ans += 1;
            }
        }
        return ans;
    }
}
