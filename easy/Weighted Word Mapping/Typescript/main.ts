// Problem: Weighted Word Mapping
// Link to the problem: https://leetcode.com/problems/weighted-word-mapping/
function mapWordWeights(words: string[], weights: number[]): string {
    let ans: String[] = [];
    for (const word of words) {
        let sum = 0;
        for (const ch of word) {
            sum += weights[ch.charCodeAt(0) - 'a'.charCodeAt(0)];
        }
        ans.push(String.fromCharCode('z'.charCodeAt(0) - (sum % 26)));
    }
    return ans.join('');
};