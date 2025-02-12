class Solution {
public:
    bool isVowel(char c) {
        return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
                c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
    }

    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        vector<int> prefixSum(words.size() + 1, 0);

        for (int i = 0; i < words.size(); i++) {
            if (isVowel(words[i][0]) && isVowel(words[i].back())) {
                prefixSum[i + 1] = prefixSum[i] + 1; 
            } else {
                prefixSum[i + 1] = prefixSum[i];
            }
        }
        vector<int> result;
        for (auto& query : queries) {
            int left = query[0], right = query[1];
            result.push_back(prefixSum[right + 1] - prefixSum[left]);
        }

        return result;
    }
};
