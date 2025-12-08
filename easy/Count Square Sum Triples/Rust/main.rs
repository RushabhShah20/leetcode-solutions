// Problem: Count Square Sum Triples
// Link to the problem: https://leetcode.com/problems/count-square-sum-triples/
impl Solution {
    pub fn count_triples(n: i32) -> i32 {
        let mut ans: i32 = 0;
        for i in 1..=n {
            let x: i32 = i * i;
            let mut l: i32 = 1;
            let mut r: i32 = i - 1;
            while (l < r) {
                let sum: i32 = l * l + r * r;
                if (sum == x) {
                    ans += 2;
                    l += 1;
                    r -= 1;
                } else if (sum < x) {
                    l += 1;
                } else {
                    r -= 1;
                }
            }
        }
        return ans;
    }
}
