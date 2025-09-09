// Problem: Minimum Deletions to Make Array Divisible
// Link to the problem: https://leetcode.com/problems/minimum-deletions-to-make-array-divisible/
impl Solution {
    pub fn gcd(a: i32, b: i32) -> i32 {
        if (b == 0) {
            return a;
        } else {
            return Self::gcd(b, a % b);
        }
    }
    pub fn min_operations(nums: Vec<i32>, nums_divide: Vec<i32>) -> i32 {
        let mut x: i32 = nums_divide[0];
        for i in 1..nums_divide.len() {
            x = Self::gcd(x, nums_divide[i]);
        }
        let mut y: std::collections::BTreeMap<i32, i32> = std::collections::BTreeMap::new();
        for num in nums.iter() {
            *y.entry(*num).or_insert(0) += 1;
        }
        let mut ans: i32 = 0;
        for (key, value) in y.iter() {
            if (x % key == 0) {
                break;
            } else {
                ans += value;
            }
        }
        if (ans == nums.len() as i32) {
            return -1;
        } else {
            return ans;
        }
    }
}
