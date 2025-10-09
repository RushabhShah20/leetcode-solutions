// Problem: First Bad Version
// Link to the problem: https://leetcode.com/problems/first-bad-version/
// The API isBadVersion is defined for you.
// isBadVersion(version:i32)-> bool;
// to call it use self.isBadVersion(version)

impl Solution {
    pub fn first_bad_version(&self, n: i32) -> i32 {
        let mut l: i32 = 1;
        let mut r: i32 = n;
        while (l < r) {
            let m: i32 = l + (r - l) / 2;
            if (self.isBadVersion(m)) {
                r = m;
            } else {
                l = m + 1;
            }
        }
        return l;
    }
}
