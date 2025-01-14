class NumArray {
private:
    vector<int> prefix_sum; 
public:
    NumArray(vector<int>& nums) {
        int n = nums.size();
        prefix_sum.resize(n);
        prefix_sum[0] = nums[0];
        for (int i = 1; i < n; i++) {
            prefix_sum[i] = prefix_sum[i - 1] + nums[i]; 
        }
    }    
    int sumRange(int left, int right) {
        if (left == 0) {
            return prefix_sum[right]; 
        }
        return prefix_sum[right] - prefix_sum[left - 1];
    }
};
