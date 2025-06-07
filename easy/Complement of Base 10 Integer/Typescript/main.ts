// Problem: Complement of Base 10 Integer
// Link to the problem: https://leetcode.com/problems/complement-of-base-10-integer/
function toBinary(n: number): number[] {
    let ans: number[] = new Array();
    while (n > 0) {
        let rem = n % 2;
        ans.push(rem);
        n = (n / 2) >> 0;
    }
    return ans;
};
function complement(res: number[]): number[] {
    for (let i = 0; i < res.length; i++) {
        if (res[i] === 1) {
            res[i] = 0;
        } else if (res[i] === 0) {
            res[i] = 1;
        }
    }
    return res;
}
function bitwiseComplement(n: number): number {
    if (n === 0) {
        return 1;
    } else {
        let ans: number = 0;
        let binary: number[] = toBinary(n);
        let com: number[] = complement(binary);
        for (let i = 0; i < com.length; i++) {
            ans += Math.pow(2, i) * com[i];
        }
        return ans;
    }
};