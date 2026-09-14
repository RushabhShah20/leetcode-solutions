// Problem: Rectangle Overlap
// Link to the problem: https://leetcode.com/problems/rectangle-overlap/
func isRectangleOverlap(rec1 []int, rec2 []int) bool {
	var ans bool = (min(rec1[2], rec2[2]) > max(rec1[0], rec2[0])) && (min(rec1[3], rec2[3]) > max(rec1[1], rec2[1]))
	return ans
}
