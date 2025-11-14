// Problem: Increment Submatrices by One
// Link to the problem: https://leetcode.com/problems/increment-submatrices-by-one/
impl Solution {
    pub fn range_add_queries(n: i32, queries: Vec<Vec<i32>>) -> Vec<Vec<i32>> {
        let mut prefix: Vec<Vec<i32>> = vec![vec![0; (n + 1) as usize]; (n + 1) as usize];
        for query in queries {
            for i in query[0]..=query[2] {
                prefix[i as usize][query[1] as usize] += 1;
                prefix[i as usize][(query[3] + 1) as usize] -= 1;
            }
        }
        for i in 0..(n as usize) {
            for j in 1..(n as usize) {
                prefix[i][j] += prefix[i][j - 1];
            }
        }
        let mut ans: Vec<Vec<i32>> = vec![vec![0; (n as usize)]; (n as usize)];
        for i in 0..(n as usize) {
            for j in 0..(n as usize) {
                ans[i][j] = prefix[i][j];
            }
        }
        return ans;
    }
}
