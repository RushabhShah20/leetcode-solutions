// Problem: Count Non-Decreasing Subarrays After K Operations
// Link to the problem: https://leetcode.com/problems/count-non-decreasing-subarrays-after-k-operations/
impl Solution {
    pub fn count_non_decreasing_subarrays(nums: Vec<i32>, k: i32) -> i64 {
        let n: usize = nums.len();
        let mut ans: i64 = 0;
        let mut x: i64 = 0;
        let mut st: Vec<i32> = vec![0; n];
        let mut a: i32 = 0;
        let mut b: i32 = 0;
        let mut j: i32 = n as i32 - 1;
        for i in (0..n).rev() {
            while (a < b && nums[st[(b - 1) as usize] as usize] < nums[i]) {
                b -= 1;
                let y: i32 = st[b as usize];
                let r: i32 = if (a < b) { st[(b - 1) as usize] } else { j + 1 };
                x += ((r - y) as i64) * ((nums[i] - nums[y as usize]) as i64);
            }
            st[b as usize] = i as i32;
            b += 1;
            while (x > (k as i64)) {
                x -= (nums[st[a as usize] as usize] - nums[j as usize]) as i64;
                if (st[a as usize] == j) {
                    a += 1;
                }
                j -= 1;
            }
            ans += (j - (i as i32) + 1) as i64;
        }
        return ans;
    }
}
