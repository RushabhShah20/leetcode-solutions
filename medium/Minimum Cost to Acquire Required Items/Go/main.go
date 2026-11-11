// Problem: Minimum Cost to Acquire Required Items
// Link to the problem: https://leetcode.com/problems/minimum-cost-to-acquire-required-items/
func minimumCost(cost1 int, cost2 int, costBoth int, need1 int, need2 int) int64 {
	var ans int64 = (int64(need1)*int64(cost1) + int64(need2)*int64(cost2))
	var minNeed int64 = int64(min(need1, need2))
	var maxNeed int64 = int64(max(need1, need2))
	ans = min(ans, int64(minNeed)*int64(costBoth)+(int64(need1)-minNeed)*int64(cost1)+int64(int64(need2)-minNeed)*int64(cost2))
	ans = min(ans, int64(maxNeed)*int64(costBoth))
	return ans
}
