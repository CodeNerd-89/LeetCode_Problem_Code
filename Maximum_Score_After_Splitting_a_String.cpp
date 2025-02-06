class Solution {
public:
    int maxScore(string s) {
    int totalOnes = count(s.begin(), s.end(), '1');
    int currentZeros = 0, currentOnes = 0, maxScore = 0;

    for (int i = 0; i < s.size() - 1; i++) {
        if (s[i] == '0') {
            currentZeros++;
        } else {
            currentOnes++;
        }
        int rightOnes = totalOnes - currentOnes;
        maxScore = max(maxScore, currentZeros + rightOnes);
    }

    return maxScore;
}    
};
