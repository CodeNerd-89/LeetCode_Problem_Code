class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
    int max_score = INT_MIN;
    int max1 = values[0];
    for (int i = 1; i < values.size(); i++) {
        max_score = max(max_score, max1 + values[i] - i);
        max1 = max(max1, values[i] + i);
    }
    return max_score;
}
};
