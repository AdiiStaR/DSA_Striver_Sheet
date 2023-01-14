class Solution {
public:
    int singleNumber(vector<int>& nums) {
        // unordered_map<int,int> mp;
        // for(auto it: nums){
        //   mp[it]++;
          
        // }
        // for(auto it:mp){
        //   if(it.second ==1){
        //     return it.first;
        //   }
        // }
        // return 0;
        int single = 0;
        for(auto it:nums) single ^= it; //XOR of same is 0
        
        return single;
    }
};
