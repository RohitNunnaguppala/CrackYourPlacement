bool sorted(vector<int> a){
    int n=a.size();
    
    bool issorted=true;
    for(int i=0;i<n-1;i++){
        if(a[i]>a[i+1]){
            issorted=false;
            break;
        }
    }
    if(issorted) return true;
    
    int start=0;
    int end=n-1;
    while(start<n-1 && a[start]<=a[start+1]){
        start++;
    }
    while(end>0 && a[end-1]<=a[end]){
        end--;
    }
    
    reverse(a.begin()+start,a.begin()+end+1);
    
    for(int i=0;i<n-1;i++){
        if(a[i]>a[i + 1]){
            return false;
        }
    }
    return true;

}
