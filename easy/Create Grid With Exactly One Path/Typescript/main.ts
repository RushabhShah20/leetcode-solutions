// Problem: Create Grid With Exactly One Path
// Link to the problem: https://leetcode.com/problems/create-grid-with-exactly-one-path/
function createGrid(m: number, n: number): string[] {
    const grid: string[][] = Array.from(
        { length: m },
        (): string[] => new Array<string>(n).fill('#')
    );
    for (let i: number = 0; i < n; i++) {
        grid[0][i] = '.';
    }
    for (let i: number = 0; i < m; i++) {
        grid[i][n - 1] = '.';
    }
    const ans: string[] = grid.map((row: string[]): string => row.join(''));
    return ans;
};