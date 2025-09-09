// Problem: Minimum Deletions to Make Array Divisible
// Link to the problem: https://leetcode.com/problems/minimum-deletions-to-make-array-divisible/
func gcd(a int, b int) int {
	if b == 0 {
		return a
	} else {
		return gcd(b, a%b)
	}

}
func minOperations(nums []int, numsDivide []int) int {
	var x int = numsDivide[0]
	for i := 1; i < len(numsDivide); i++ {
		x = gcd(x, numsDivide[i])
	}
	var ans int = 0
	var y map[int]int = make(map[int]int)
	for i := 0; i < len(nums); i++ {
		y[nums[i]]++
	}
	var keys []int = make([]int, 0, len(y))
	for k := range y {
		keys = append(keys, k)
	}
	sort.Ints(keys)
	for _, key := range keys {
		if x%key == 0 {
			break
		} else {
			ans += y[key]
		}
	}
	if ans == len(nums) {
		return -1
	} else {
		return ans
	}
}
