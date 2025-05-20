// Problem: Majority Element II
// Link to the problem: https://leetcode.com/problems/majority-element-ii/
func majorityElement(nums []int) []int {
	m := make(map[int]int)
	var ans []int
	for _, num := range nums {
		m[num]++
	}
	for k, v := range m {
		if v*3 > len(nums) {
			ans = append(ans, k)
		}
	}
	return ans
}
