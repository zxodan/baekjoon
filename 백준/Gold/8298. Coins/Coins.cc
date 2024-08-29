#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    string tosses;
    cin >> tosses;

    unordered_map<long long, int> prefix_map;
    prefix_map[0] = -1;
    
    long long prefix_sum = 0;
    int max_length = 0;

    for (int i = 0; i < n; ++i) {
        if (tosses[i] == 'O') {
            prefix_sum += 1;
        } else if (tosses[i] == 'R') {
            prefix_sum -= k;
        }

        if (prefix_map.find(prefix_sum) != prefix_map.end()) {
            int length = i - prefix_map[prefix_sum];
            if (length > max_length) {
                max_length = length;
            }
        } else {
            prefix_map[prefix_sum] = i;
        }
    }

    cout << max_length << endl;
    return 0;
}