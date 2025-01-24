class Solution {
private:
    vector<int> prefix_sum; 

public:
    vector<int> xorQueries(vector<int>& nums, vector<vector<int>>& queries) {
        int n = nums.size();
        prefix_sum.resize(n);
        prefix_sum[0] = nums[0];
    
        for (int i = 1; i < n; i++) {
            prefix_sum[i] = prefix_sum[i - 1] ^ nums[i];
        }

        vector<int> result;
    
        for (const auto& query : queries) {
            int l = query[0];
            int r = query[1];

            if (l == 0) {
                result.push_back(prefix_sum[r]);
            } else {
                result.push_back(prefix_sum[r] ^ prefix_sum[l - 1]);
            }
        }      
        return result;
    }
};
