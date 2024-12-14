class Solution {
public:
    void backtrack(vector<int>& nums, vector<bool>& visited, vector<int>& current, vector<vector<int>>& result) {
        if (current.size() == nums.size()) {
            result.push_back(current); 
            return;
        }
        for (int i = 0; i < nums.size(); i++) {
            if (visited[i] || (i > 0 && nums[i] == nums[i - 1] && !visited[i - 1])) {
                continue;
            }
            visited[i] = true;
            current.push_back(nums[i]);
            backtrack(nums, visited, current, result);
            visited[i] = false;
            current.pop_back();
        }
    }
    vector<vector<int>> uniquePerms(vector<int>& arr, int n) {
        vector<vector<int>> result;
        vector<int> current;
        vector<bool> visited(n, false);
        
        sort(arr.begin(), arr.end()); 
        backtrack(arr, visited, current, result);
        
        return result;
    }
};
