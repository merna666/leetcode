bool containsDuplicate(vector<int>&nums){
    unordered_set<int> A;
    for(unsigned int i = 0 ; i< nums.size();i++){
        if(A.find(nums[i])!=A.end())
           return true;
           else
            A.insert(nums[i]);
    }
    return false;
}