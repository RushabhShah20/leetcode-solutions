// Problem: Weighted Word Mapping
// Link to the problem: https://leetcode.com/problems/weighted-word-mapping/
func mapWordWeights(words []string, weights []int) string {
	var ans []byte = []byte{}
	for _, word := range words {
		var sum int = 0
		for _, ch := range word {
			sum += weights[ch-'a']
		}
		ans = append(ans, byte('z'-(sum%26)))
	}
	return string(ans)
}
