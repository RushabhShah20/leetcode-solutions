// Problem: How Many Numbers Are Smaller Than the Current Number
// Link to the problem: https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number/
func smallerNumbersThanCurrent(nums []int) []int {
	var n int = len(nums)
	var freq []int = make([]int, 101)
	for _, num := range nums {
		freq[num]++
	}
	for i := 1; i < 101; i++ {
		freq[i] += freq[i-1]
	}
	var ans []int = make([]int, n)
	for i := 0; i < n; i++ {
		if nums[i] == 0 {
			ans[i] = 0
		} else {
			ans[i] = freq[nums[i]-1]
		}
	}
	return ans
}
