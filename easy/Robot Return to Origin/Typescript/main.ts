// Problem: Robot Return to Origin
// Link to the problem: https://leetcode.com/problems/robot-return-to-origin/
function judgeCircle(moves: string): boolean {
    let y: number = 0;
    let x: number = 0;
    for (const move of moves) {
        if (move === 'U') {
            y++;
        }
        if (move === 'D') {
            y--;
        }
        if (move === 'R') {
            x++;
        }
        if (move === 'L') {
            x--;
        }
    }
    const ans: boolean = (x === 0 && y === 0);
    return ans;
};