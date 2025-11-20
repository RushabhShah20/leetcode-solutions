// Problem: Count Substrings Starting and Ending with Given Character
// Link to the problem: https://leetcode.com/problems/count-substrings-starting-and-ending-with-given-character/
package main

func countSubstrings(s string, c byte) int64 {
	var m int64 = 0
	for _, ch := range s {
		if (byte)(ch) == c {
			m++
		}
	}
	var ans int64 = (m * (m + 1)) / 2
	return ans
}
