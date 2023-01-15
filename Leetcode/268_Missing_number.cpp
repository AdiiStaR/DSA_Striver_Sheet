class Solution {
public:
    int missingNumber(vector<int>& nums) {
      int n = nums.size();
      int mis = 0;
      for(int it:nums){
        n^= it;
        n ^= mis;
        mis++;
      }
      return n;
    }
};
