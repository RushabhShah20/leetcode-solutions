// Problem: Count Items Matching a Rule
// Link to the problem: https://leetcode.com/problems/count-items-matching-a-rule/
/**
 * @param {string[][]} items
 * @param {string} ruleKey
 * @param {string} ruleValue
 * @return {number}
 */
var countMatches = function (items, ruleKey, ruleValue) {
    let ans = 0;
    for (let i = 0; i < items.length; i++) {
        if (ruleKey == "type" && items[i][0] == ruleValue) {
            ans++;
        }
        if (ruleKey == "color" && items[i][1] == ruleValue) {
            ans++;
        }
        if (ruleKey == "name" && items[i][2] == ruleValue) {
            ans++;
        }
    }
    return ans;
};