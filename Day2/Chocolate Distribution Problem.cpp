int chocolatedistrubution(vector<int> &arr,int m){
    int n=arr.size();
    if(m>n) return -1;
    sort(arr.begin(),arr.end());
    int mindiff=INT_MAX;
    for(int i=0;i<=n-m;i++){
        int diff=arr[i+m-1]-arr[i];
        mindiff=min(mindiff,diff);
    }
    return mindiff;
}
