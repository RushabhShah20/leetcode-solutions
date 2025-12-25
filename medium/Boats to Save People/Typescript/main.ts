// Problem: Boats to Save People
// Link to the problem: https://leetcode.com/problems/boats-to-save-people/
function numRescueBoats(people: number[], limit: number): number {
    people.sort((a, b) => a - b);
    let ans: number = 0, n: number = people.length, i: number = 0, j: number = n - 1;
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