// Problem: Smallest Unique Subarray
// Link to the problem: https://leetcode.com/problems/smallest-unique-subarray/
use std::collections::HashMap;

impl Solution {
    fn check(a: &Vec<i32>, k: usize) -> bool {
        let n: usize = a.len();
        let mut m: HashMap<i64, i32> = HashMap::new();
        const P1: i64 = 31;
        const P2: i64 = 37;
        const M1: i64 = 1000000007;
        const M2: i64 = 1000000009;
        let mut e1: i64 = 1;
        let mut e2: i64 = 1;
        let mut h1: i64 = 0;
        let mut h2: i64 = 0;
        let mut i: usize = 0;
        while i < k {
            h1 = (h1 * P1 % M1 + a[i] as i64) % M1;
            h2 = (h2 * P2 % M2 + a[i] as i64) % M2;
            i += 1;
        }
        i = 1;
        while i < k {
            e1 = e1 * P1 % M1;
            e2 = e2 * P2 % M2;
            i += 1;
        }
        let mut key: i64 = h1 * M2 + h2;
        m.insert(key, 1);
        i = k;
        while i < n {
            let x1: i64 = (a[i - k] as i64) * e1 % M1;
            h1 = (h1 - x1 + M1) % M1;
            h1 = (h1 * P1 % M1 + a[i] as i64) % M1;
            let x2: i64 = (a[i - k] as i64) * e2 % M2;
            h2 = (h2 - x2 + M2) % M2;
            h2 = (h2 * P2 % M2 + a[i] as i64) % M2;
            key = h1 * M2 + h2;
            *m.entry(key).or_insert(0) += 1;
            i += 1;
        }
        for count_ref in m.values() {
            let count: i32 = *count_ref;
            if count == 1 {
                return false;
            }
        }
        return true;
    }
    pub fn smallest_unique_subarray(nums: Vec<i32>) -> i32 {
        let n: usize = nums.len();
        let mut ans: i32 = n as i32;
        let mut l: i32 = 1;
        let mut r: i32 = n as i32;
        while l <= r {
            let m: i32 = l + (r - l) / 2;
            if Self::check(&nums, m as usize) {
                l = m + 1;
            } else {
                ans = m;
                r = m - 1;
            }
        }
        return ans;
    }
}
