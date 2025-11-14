// Problem: Difference Between Element Sum and Digit Sum of an Array
// Link to the problem: https://leetcode.com/problems/difference-between-element-sum-and-digit-sum-of-an-array/
impl Solution {
    pub fn difference_of_sum(nums: Vec<i32>) -> i32 {
        let mut ele_sum: i32 = 0;
        let mut dig_sum: i32 = 0;
        for mut num in nums {
            ele_sum += num;
            while (num > 0) {
                dig_sum += (num % 10);
                num /= 10;
            }
        }
        if (ele_sum > dig_sum) {
            return ele_sum - dig_sum;
        } else {
            return dig_sum - ele_sum;
        }
    }
}
