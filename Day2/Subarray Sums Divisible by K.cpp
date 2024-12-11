class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int,int> countmap;
        countmap[0]=1;
        int prefixsum=0;
        int result=0;
        for(auto num:nums){
            prefixsum+=num;
            int mod=((prefixsum%k)+k)%k;
            if(countmap.find(mod)!=countmap.end()){
                result+=countmap[mod];
            }
            countmap[mod]++;
        }
        return result;
    }
};
