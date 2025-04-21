// Problem: Count Number of Distinct Integers After Reverse Operations
// Link to the problem: https://leetcode.com/problems/count-number-of-distinct-integers-after-reverse-operations/
impl Solution {
    pub fn rev(n: i32) -> i32 {
        let mut num: i32 = n;
        let mut rev: i32 = 0;
        while num > 0 {
            rev = (rev * 10) + (num % 10);
            num /= 10;
        }
        return rev;
    }
    pub fn count_distinct_integers(nums: Vec<i32>) -> i32 {
        let mut s: std::collections::HashSet<i32> = std::collections::HashSet::new();
        let mut ans: Vec<i32> = nums.clone();
        for i in 0..nums.len() {
            ans.push(Self::rev(nums[i]));
        }
        for i in 0..ans.len() {
            s.insert(ans[i]);
        }
        return s.len().try_into().unwrap();
    }
}
