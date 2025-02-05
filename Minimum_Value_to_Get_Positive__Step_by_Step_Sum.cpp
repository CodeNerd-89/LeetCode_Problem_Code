class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int c_sum = 0;
        int min_sum = 0;
        int n = nums.size();
        for(int i = 0; i < n; i++){
            c_sum += nums[i];
            min_sum = min(min_sum,c_sum);
        }
        if(min_sum < 0){
            return (1 - min_sum);
        }
        else{
            return 1;
        }       
    }
};
