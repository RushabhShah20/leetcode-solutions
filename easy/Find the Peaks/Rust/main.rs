// Problem: Find the Peaks
// Link to the problem: https://leetcode.com/problems/find-the-peaks/
impl Solution {
    pub fn find_peaks(mountain: Vec<i32>) -> Vec<i32> {
        let mut ans: Vec<i32> = Vec::new();
        for i in 1..mountain.len() - 1 {
            if (mountain[i] > mountain[i + 1] && mountain[i] > mountain[i - 1]) {
                ans.push(i.try_into().unwrap());
            }
        }
        return ans;
    }
}
