// Problem: Count Items Matching a Rule
// Link to the problem: https://leetcode.com/problems/count-items-matching-a-rule/
func countMatches(items [][]string, ruleKey string, ruleValue string) int {
	var ans int = 0
	for i := 0; i < len(items); i++ {
		if ruleKey == "type" && items[i][0] == ruleValue {
			ans++
		}
		if ruleKey == "color" && items[i][1] == ruleValue {
			ans++
		}
		if ruleKey == "name" && items[i][2] == ruleValue {
			ans++
		}
	}
	return ans
}
