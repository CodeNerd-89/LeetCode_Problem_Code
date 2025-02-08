class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int prefix = 0;
        int suffix = 0;
        for (int num : nums) {
            suffix += num;
        }
        vector<int> ans;
        for (int x : nums) {
            prefix += x;            
            ans.push_back(abs(prefix - suffix)); 
            suffix -= x;    
        }
        return ans;
    }
};
