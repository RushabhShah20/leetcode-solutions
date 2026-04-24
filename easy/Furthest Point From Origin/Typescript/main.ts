// Problem: Furthest Point From Origin
// Link to the problem: https://leetcode.com/problems/furthest-point-from-origin/
function furthestDistanceFromOrigin(moves: string): number {
    const n: number = moves.length;
    let left: number = 0, right: number = 0, spaces: number = 0;
    for (let i = 0; i < n; i++) {
        if (moves[i] === 'L') {
            left++;
        }
        else if (moves[i] === 'R') {
            right++;
        }
        else {
            spaces++;
        }
    }
    const ans: number = spaces + Math.abs(left - right);
    return ans;
};