void printDuplicates(string str) {
    unordered_map<char, int> freq;

    for (char c : str) {
        freq[c]++;
    }

    for (auto pair : freq) {
        if (pair.second > 1) {
            cout << pair.first << ", count = " << pair.second << endl;
        }
    }
}
