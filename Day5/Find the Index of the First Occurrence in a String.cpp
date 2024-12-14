class Solution {
public:
    int strStr(string haystack, string needle) {
        int h,n;
        int neelen=needle.size();
        int haylen=haystack.size();
        
        if(haylen<neelen){
            return -1;
        }
        
        for(h=0;h<=haylen-neelen;h++){
            n=0;
            while(n<neelen&&haystack[h+n]==needle[n]){
                n++;
            }
            if(n==neelen){
                return h;
            }
        }
        
        return -1;
    }
};
