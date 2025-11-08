// Problem: Minimum Cost to Move Chips to The Same Position
// Link to the problem: https://leetcode.com/problems/minimum-cost-to-move-chips-to-the-same-position/
function minCostToMoveChips(position: number[]): number {
    let even: number = 0, odd: number = 0;
    for (const i of position) {
        if (i % 2 === 0) {
            even++;
        }
        else {
            odd++;
        }
    }
    let ans: number = Math.min(even, odd);
    return ans;
};