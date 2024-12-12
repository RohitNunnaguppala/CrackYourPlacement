class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> sumcnt;
        sumcnt[0]=1; 
        int cnt=0,cursum = 0;

        for (int num:nums) {
            cursum+=num; 
            if(sumcnt.find(cursum-k)!=sumcnt.end()) {
                cnt+=sumcnt[cursum-k];
            }
            sumcnt[cursum]++;
        }
        return cnt;
    }
};
