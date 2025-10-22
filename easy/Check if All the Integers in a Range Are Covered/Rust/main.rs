// Problem: Check if All the Integers in a Range Are Covered
// Link to the problem: https://leetcode.com/problems/check-if-all-the-integers-in-a-range-are-covered/
impl Solution {
    pub fn is_covered(ranges: Vec<Vec<i32>>, left: i32, right: i32) -> bool {
        let mut covered: Vec<bool> = vec![false; 51];
        for range in ranges {
            for i in range[0]..=range[1] {
                covered[i as usize] = true;
            }
        }
        for i in left..=right {
            if (covered[i as usize] == false) {
                return false;
            }
        }
        return true;
    }
}
