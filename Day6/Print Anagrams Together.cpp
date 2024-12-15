class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& arr) {
        unordered_map<string, vector<string>> g;
        vector<string> o;
        
        for(string s : arr){
            string k = s;
            sort(k.begin(), k.end());
            if(g.find(k) == g.end()) o.push_back(k);
            g[k].push_back(s);
        }
        
        vector<vector<string>> r;
        for(string k : o){
            vector<string> t = g[k];
            sort(t.begin(), t.end());
            r.push_back(t);
        }
        
        sort(r.begin(), r.end());
        return r;
    }
};
