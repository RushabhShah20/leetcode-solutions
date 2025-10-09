// Problem: First Bad Version
// Link to the problem: https://leetcode.com/problems/first-bad-version/
/**
 * Forward declaration of isBadVersion API.
 * @param   version   your guess about first bad version
 * @return 	 	      true if current version is bad
 *			          false if current version is good
 * func isBadVersion(version int) bool;
 */
func firstBadVersion(n int) int {
	var l int = 1
	var r int = n
	for l < r {
		var m int = l + (r-l)/2
		if isBadVersion(m) {
			r = m
		} else {
			l = m + 1
		}
	}
	return l
}
