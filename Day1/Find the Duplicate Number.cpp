class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
        map<int,int> arr;
        for(int i=0;i<n;i++){
            arr[nums[i]]++;
        }
        for(auto it:arr){
            if(it.second>1){
                return it.first;
            }
        }
        return -1;
    }
};