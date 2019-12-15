#include <map>
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      map<int,int> mp;
    vector<int> res(2);
        int comp ;
    for(unsigned int i = 0; i < nums.size();i++){
        comp = target - nums[i];
        if(mp.find(comp)!=mp.end()){
            res[1]=i;
            res[0]=mp[comp];
            return res;
        }else{
            mp[nums[i]]=i;
        }
    }
    return nums;
    }
};