// Problem: The kth Factor of n
// Link to the problem: https://leetcode.com/problems/the-kth-factor-of-n/
impl Solution {
    pub fn kth_factor(n: i32, k: i32) -> i32 {
        let mut a: Vec<i32> = Vec::new();
        for i in 1..=n {
            if n % i == 0 {
                a.push(i);
            }
        }
        if a.len() < k.try_into().unwrap() {
            return -1;
        } else {
            return a[(k - 1) as usize];
        }
    }
}
