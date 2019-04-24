// The Hamming distance between two integers is the number of positions at which the corresponding bits are different.
//
// Now your job is to find the total Hamming distance between all pairs of the given numbers.
//
//
// Example:
//
// Input: 4, 14, 2
//
// Output: 6
//
// Explanation: In binary representation, the 4 is 0100, 14 is 1110, and 2 is 0010 (just
// showing the four bits relevant in this case). So the answer will be:
// HammingDistance(4, 14) + HammingDistance(4, 2) + HammingDistance(14, 2) = 2 + 2 + 2 = 6.
//
//
//
// Note:
//
// Elements of the given array are in the range of 0  to 10^9
// Length of the array will not exceed 10^4. 
//
//


class Solution {

public:
    int totalHammingDistance(vector<int>& nums) {
        int n = nums.size();
        if(n < 2)
            return 0;
        int sum = 0;
        vector<int>zeroOne(2,0);
        while(true){
            int zeroCnt = 0;
            zeroOne[0] = 0;
            zeroOne[1] = 0;
            for(auto &num: nums){
                if(num == 0) ++ zeroCnt;
                ++ zeroOne[num % 2];
                num >>= 1;
            }
            sum += zeroOne[0] * zeroOne[1];
            if(zeroCnt == n) return sum;
        }
    }
};
