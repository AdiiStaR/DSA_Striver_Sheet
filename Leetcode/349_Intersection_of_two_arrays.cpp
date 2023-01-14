class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>  common;
       
        int n1= nums1.size();
        int n2 = nums2.size();

        // for(int i=0;i<n1;i++){
        //   for(int j=0;j<n2;j++){
        //     if(nums1[i]==nums2[j] && find(common.begin(),common.end(),nums1[i]) == common.end()){
              
        //       common.push_back(nums2[j]);
        //     }
        //   }
        // }
        // return common;
        
        unordered_map<int,int> mp;
        for(auto it:nums1){
          mp[it]++;
        }
        for(auto sex:nums2){
          if(mp[sex]!=0){
            common.push_back(sex);
            mp.erase(sex);
          }
        }
        return common;
    }
};
