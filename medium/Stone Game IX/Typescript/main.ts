// Problem: Stone Game IX
// Link to the problem: https://leetcode.com/problems/stone-game-ix/
function stoneGameIX(stones: number[]): boolean {
    const n: number = stones.length;
    let a: number = 0, b: number = 0, c: number = 0;
    for (let i = 0; i < n; i++) {
        const x: number = stones[i] % 3;
        if (x === 1) {
            b++;
        }
        else if (x === 2) {
            c++;
        }
        else {
            a++;
        }
    }
    const ans: boolean = a & 1 ? Math.abs(b - c) > 2 : b >= 1 && c >= 1;
    return ans;
};