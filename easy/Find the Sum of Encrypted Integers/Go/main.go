// Problem: Find the Sum of Encrypted Integers
// Link to the problem: https://leetcode.com/problems/find-the-sum-of-encrypted-integers/
func maxDigitOfNum(num int) int {
	var maxDigit int = 0
	for num > 0 {
		maxDigit = max(maxDigit, num%10)
		num /= 10
	}
	return maxDigit
}
func numofDigits(num int) int {
	var count int = 0
	for num > 0 {
		count++
		num /= 10
	}
	return count
}
func encrypt(num int) int {
	var maxDigit int = maxDigitOfNum(num)
	var numDigits int = numofDigits(num)
	var ans int = 0
	for i := 1; i <= numDigits; i++ {
		ans += maxDigit * int(math.Pow(float64(10), float64(i-1)))
	}
	return ans
}
func sumOfEncryptedInt(nums []int) int {
	var ans int = 0
	for i := 0; i < len(nums); i++ {
		nums[i] = encrypt(nums[i])
		ans += nums[i]
	}
	return ans
}
