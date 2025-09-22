// Problem: Count Elements With Maximum Frequency
// Link to the problem: https://leetcode.com/problems/count-elements-with-maximum-frequency/
func maxFrequencyElements(nums []int) int {
	var x map[int]int = make(map[int]int)
	for i := 0; i < len(nums); i++ {
		x[nums[i]]++
	}
	var y map[int][]int = make(map[int][]int)
	for key, value := range x {
		for j := 0; j < value; j++ {
			y[value] = append(y[value], key)
		}
	}
	var maxFreq int = 0
	for freq := range y {
		if freq > maxFreq {
			maxFreq = freq
		}
	}
	var ans []int = y[maxFreq]
	return len(ans)
}
