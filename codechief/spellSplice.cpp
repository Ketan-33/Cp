#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int T;
    cin >> T; // Read the number of test cases
    while (T--) {
        int N;
        cin >> N; // Read the number of spells
        vector<pair<int, int>> spells(N);

        // Read the spells
        for (int i = 0; i < N; ++i) {
            cin >> spells[i].first >> spells[i].second; // Vi and Ai
        }

        // Sort spells by strength (Ai) in descending order
        sort(spells.begin(), spells.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
            return a.second > b.second;
        });

        long long max_strength = 0;

        // Consider top 100 spells to maximize the chance of finding the highest combination
        int limit = min(100, N);
        
        for (int i = 0; i < limit; ++i) {
            for (int j = i + 1; j < limit; ++j) {
                long long combined_strength = (long long)spells[i].second * spells[j].first + 
                                              (long long)spells[i].first * spells[j].second;
                max_strength = max(max_strength, combined_strength);
            }
        }
        
        cout << max_strength << endl;
    }
    return 0;
}
