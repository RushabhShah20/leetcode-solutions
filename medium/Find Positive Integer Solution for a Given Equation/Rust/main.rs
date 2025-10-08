// Problem: Find Positive Integer Solution for a Given Equation
// Link to the problem: https://leetcode.com/problems/find-positive-integer-solution-for-a-given-equation/
/*
 * // This is the custom function interface.
 * // You should not implement it, or speculate about its implementation
 * struct CustomFunction;
 * impl CustomFunction {
 *    pub fn f(x:i32,y:i32)->i32{}
 * }
 */

impl Solution {
    pub fn find_solution(customfunction: &CustomFunction, z: i32) -> Vec<Vec<i32>> {
        let mut ans: Vec<Vec<i32>> = Vec::new();
        for x in 1..1000 {
            for y in 1..1000 {
                if (customfunction.f(x, y) == z) {
                    ans.push([x, y].to_vec());
                }
            }
        }
        return ans;
    }
}
