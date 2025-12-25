// Problem: Boats to Save People
// Link to the problem: https://leetcode.com/problems/boats-to-save-people/
/**
 * @param {number[]} people
 * @param {number} limit
 * @return {number}
 */
var numRescueBoats = function (people, limit) {
    people.sort((a, b) => a - b);
    let ans = 0, n = people.length, i = 0, j = n - 1;
    while (i <= j) {
        if (people[i] + people[j] <= limit) {
            i++;
            j--;
        }
        else {
            j--;
        }
        ans++;
    }
    return ans;
};