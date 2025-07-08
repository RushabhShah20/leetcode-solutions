// Problem: Arranging Coins
// Link to the problem: https://leetcode.com/problems/arranging-coins/
impl Solution {
    pub fn arrange_coins(n: i32) -> i32 {
        let mut low: i32 = 0;
        let mut high: i32 = n;
        let mut ans: i32 = 0;
        while (low <= high) {
            let mut mid: i64 = (low + (high - low) / 2).into();
            let mut sum: i64 = mid * (mid + 1) / 2;
            if (sum == (n as i64)) {
                return mid.try_into().unwrap();
            } else if (sum < n.into()) {
                ans = mid.try_into().unwrap();
                low = (mid + 1).try_into().unwrap();
            } else {
                high = (mid - 1).try_into().unwrap();
            }
        }
        return ans;
    }
}
