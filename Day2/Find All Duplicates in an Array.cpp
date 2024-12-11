class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n=nums.size();
        map<int,int> arr;
        vector<int> result;
        for(int i=0;i<n;i++){
            arr[nums[i]]++;
        }
        for(auto it:arr){
            if(it.second>1){
                result.push_back(it.first);
            }
        }
        return result;
    }
};
