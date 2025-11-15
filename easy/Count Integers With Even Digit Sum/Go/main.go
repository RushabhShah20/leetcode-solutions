// Problem: Count Integers With Even Digit Sum
// Link to the problem: https://leetcode.com/problems/count-integers-with-even-digit-sum/
func countEven(num int) int {
	var count int = 0
	for i := 1; i <= num; i++ {
		var sum int = 0
		var n int = i
		for n != 0 {
			sum += n % 10
			n /= 10
		}
		if sum%2 == 0 {
			count++
		}
	}
	return count
}
