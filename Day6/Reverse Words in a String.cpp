class Solution {
public:
    string reverseWords(string s) {
        int start = 0, end = s.length() - 1;
        while (start <= end && s[start] == ' ') start++;
        while (end >= 0 && s[end] == ' ') end--;
        
        reverse(s.begin() + start, s.begin() + end + 1);

        int i = start;
        string result = "";
        while (i <= end) {
            int j = i;
            while (j <= end && s[j] != ' ') j++;
            reverse(s.begin() + i, s.begin() + j);
            result += s.substr(i, j - i) + " ";
            i = j + 1;
        
            while (i <= end && s[i] == ' ') i++;
        }
        
        result.pop_back();
        
        return result;
    }
};
