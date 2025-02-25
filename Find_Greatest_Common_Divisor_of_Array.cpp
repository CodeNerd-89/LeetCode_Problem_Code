class Solution {
public:
    int findGCD(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int a = nums[0];
        int b = nums[n - 1];
        int ans = __gcd(a, b);
        return ans;        
    }
};
