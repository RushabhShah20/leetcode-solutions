// Problem: Count Good Triplets
// Link to the problem: https://leetcode.com/problems/count-good-triplets/
impl Solution {
    pub fn count_good_triplets(arr: Vec<i32>, a: i32, b: i32, c: i32) -> i32 {
        let n: usize = arr.len();
        let mut ans: i32 = 0;
        for i in 0..n - 2 {
            for j in i + 1..n - 1 {
                for k in j + 1..n {
                    if ((arr[i] - arr[j]).abs() > a) {
                        continue;
                    }
                    if ((arr[j] - arr[k]).abs() > b) {
                        continue;
                    }
                    if ((arr[i] - arr[k]).abs() > c) {
                        continue;
                    }
                    ans += 1;
                }
            }
        }
        return ans;
    }
}
