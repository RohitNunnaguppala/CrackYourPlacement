int minimizeCost(vector<int>& arr) {
    int n = arr.size();
    sort(arr.begin(), arr.end());

    int median = arr[n / 2];

    int cost = 0;
    for (int i = 0; i < n; i++) {
        cost += abs(arr[i] - median);
    }

    return cost;
}
