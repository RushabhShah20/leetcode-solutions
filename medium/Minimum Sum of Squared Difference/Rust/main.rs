// Problem: Minimum Sum of Squared Difference
// Link to the problem: https://leetcode.com/problems/minimum-sum-of-squared-difference/
impl Solution {
    pub fn min_sum_square_diff(mut nums1: Vec<i32>, nums2: Vec<i32>, k1: i32, k2: i32) -> i64 {
        let n: usize = nums1.len();
        let mut ans: i64 = 0;
        let mut k: i64 = k1 as i64 + k2 as i64;
        let mut x: i32 = 0;
        let mut y: i32 = 0;
        for i in 0..n {
            nums1[i] = (nums1[i] - nums2[i]).abs();
            x = x.max(nums1[i]);
        }
        let mut l: i32 = 0;
        let mut r: i32 = x;
        while (l <= r) {
            let m: i32 = (l + r) >> 1;
            let mut a: i64 = 0;
            for i in 0..n {
                if (nums1[i] > m) {
                    a += (nums1[i] - m) as i64;
                }
            }
            let z: bool = a <= k;
            if (z) {
                y = m;
                r = m - 1;
            } else {
                l = m + 1;
            }
        }
        for i in 0..n {
            if (nums1[i] > y) {
                k -= (nums1[i] - y) as i64;
            }
        }
        nums1.sort();
        for i in (0..n).rev() {
            let mut b: i64 = (y as i64).min(nums1[i] as i64);
            if (k > 0 && b > 0) {
                k -= 1;
                b -= 1;
            }
            ans += b * b;
        }
        return ans;
    }
}
