// Problem: Find Smallest Letter Greater Than Target
// Link to the problem: https://leetcode.com/problems/find-smallest-letter-greater-than-target/
func nextGreatestLetter(letters []byte, target byte) byte {
	var n int = len(letters)
	var l int = 0
	var r int = n - 1
	var ans byte = letters[0]
	for l <= r {
		var m int = l + (r-l)/2
		if letters[m] > target {
			ans = letters[m]
			r = m - 1
		} else {
			l = m + 1
		}
	}
	return ans
}
