# Problem: Count Items Matching a Rule
# Link to the problem: https://leetcode.com/problems/count-items-matching-a-rule/
class Solution:
    def countMatches(self, items: List[List[str]], ruleKey: str, ruleValue: str) -> int:
        ans: int = 0
        for i in range(0, len(items), 1):
            if ruleKey == "type" and items[i][0] == ruleValue:
                ans += 1
            if ruleKey == "color" and items[i][1] == ruleValue:
                ans += 1
            if ruleKey == "name" and items[i][2] == ruleValue:
                ans += 1
        return ans
