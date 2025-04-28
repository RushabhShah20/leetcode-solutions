// Problem: Find the Distance Value Between Two Arrays
// Link to the problem: https://leetcode.com/problems/find-the-distance-value-between-two-arrays/
impl Solution {
    pub fn find_the_distance_value(arr1: Vec<i32>, arr2: Vec<i32>, d: i32) -> i32 {
        let mut ans: i32 = 0;
        for i in 0..arr1.len() {
            let mut x: bool = true;
            for j in 0..arr2.len() {
                if arr1[i] == arr2[j] || (arr1[i] - arr2[j]).abs() <= d {
                    x = false;
                    break;
                }
            }
            if x == true {
                ans += 1;
            }
        }
        return ans;
    }
}
