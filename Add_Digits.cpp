class Solution {
public:
    int calculateSumOfDigits(int num) {
        int sum_final = 0;
        while (num > 0) {
            int rem_final = num % 10; 
            sum_final += rem_final;
            num /= 10;           
        }
        return sum_final;
    }

    int addDigits(int num) {
        if (num == 0) return 0; 
        while (num >= 10) {    
            num = calculateSumOfDigits(num);
        }
        return num; 
    }
};
