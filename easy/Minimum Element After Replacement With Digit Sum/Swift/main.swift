// Problem: Minimum Element After Replacement With Digit Sum
// Link to the problem: https://leetcode.com/problems/minimum-element-after-replacement-with-digit-sum/
class Solution {
    func digitSum(_ num: Int) -> Int {
        var n = num
        var sum = 0
        while n > 0 {
            sum += n % 10
            n /= 10
        }
        return sum
    }
    func minElement(_ nums: [Int]) -> Int {
        var min = Int.max
        for num in nums {
            var x = digitSum(num)
            if x < min {
                min = x
            }   
        }
        return min
    }
}