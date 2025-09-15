// Problem: Maximum Number of Words You Can Type
// Link to the problem: https://leetcode.com/problems/maximum-number-of-words-you-can-type/
function canBeTypedWords(text: string, brokenLetters: string): number {
    const words: string[] = text.split(' ');
    let ans: number = words.length;
    for (let i = 0; i < words.length; i++) {
        for (let j = 0; j < brokenLetters.length; j++) {
            if (words[i].indexOf(brokenLetters[j]) !== -1) {
                ans--;
                break;
            }
        }
    }
    return ans;
};