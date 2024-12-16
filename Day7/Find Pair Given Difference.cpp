 bool findPair(int arr[], int n, int x) {
        if (n < 2) return false;
        sort(arr, arr + n);
        int left = 0, right = 1;
        while (right < n) {
            int diff = arr[right] - arr[left];
            if (diff == x) return true;
            if (diff < x) {
                right++;
            } else {
                if (left != right - 1) left++;
                else right++;
          }
}
