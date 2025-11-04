// Problem: Find X-Sum of All K-Long Subarrays I
// Link to the problem: https://leetcode.com/problems/find-x-sum-of-all-k-long-subarrays-i/
func findXSum(nums []int, k int, x int) []int {
	var n int = len(nums)
	var ans []int = []int{}
	var m map[int]int = make(map[int]int)
	for i := 0; i < n; i++ {
		if i >= k {
			m[nums[i]]++
			m[nums[i-k]]--
			if m[nums[i-k]] == 0 {
				delete(m, nums[i-k])
			}
		} else {
			m[nums[i]]++
		}
		if i >= k-1 {
			type Pair struct {
				key   int
				value int
			}
			v := []Pair{}
			for key, value := range m {
				v = append(v, Pair{key, value})
			}
			sort.Slice(v, func(a, b int) bool {
				if v[a].value == v[b].value {
					return v[a].key > v[b].key
				} else {
					return v[a].value > v[b].value
				}
			})
			var sum int = 0
			for j := 0; j < min(x, len(v)); j++ {
				sum += v[j].key * v[j].value
			}
			ans = append(ans, sum)
		}
	}

	return ans
}

func min(a, b int) int {
	if a < b {
		return a
	}
	return b
}
