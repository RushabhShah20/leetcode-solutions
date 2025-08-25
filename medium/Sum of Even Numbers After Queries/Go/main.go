// Problem: Sum of Even Numbers After Queries
// Link to the problem: https://leetcode.com/problems/sum-of-even-numbers-after-queries/
func sumEvenAfterQueries(nums []int, queries [][]int) []int {
	var sum int = 0
	for i := 0; i < len(nums); i++ {
		if nums[i]%2 == 0 {
			sum += nums[i]
		}
	}
	var ans []int = make([]int, len(queries))
	for i := 0; i < len(queries); i++ {
		if nums[queries[i][1]]%2 == 0 {
			if (nums[queries[i][1]]+queries[i][0])%2 == 0 {
				sum += queries[i][0]
				nums[queries[i][1]] += queries[i][0]
			} else {
				sum -= nums[queries[i][1]]
				nums[queries[i][1]] += queries[i][0]
			}
		} else {
			if (nums[queries[i][1]]+queries[i][0])%2 == 0 {
				sum += (nums[queries[i][1]] + queries[i][0])
				nums[queries[i][1]] += queries[i][0]
			} else {
				nums[queries[i][1]] += queries[i][0]
			}
		}
		ans[i] = sum
	}
	return ans
}
