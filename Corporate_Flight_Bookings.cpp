class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
    vector<int> answer(n, 0);
    for (const auto& booking : bookings) {
        int first = booking[0], last = booking[1], seats_reserved = booking[2];
        answer[first - 1] += seats_reserved;
        if (last < n) {
            answer[last] -= seats_reserved;
        }
    }
    for (int i = 1; i < n; ++i) {
        answer[i] += answer[i - 1];
    }

    return answer;
}
};
