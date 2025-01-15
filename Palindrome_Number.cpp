class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) return false;
        long long original = x;
        long long reversed = 0;
        while (x > 0) {
        long long digit = x % 10;     
        reversed = reversed * 10 + digit;
        x /= 10;              
    }
    if(original == reversed) return true;
    else return false;      
    }
};
