#include <iostream>
#include <string>
#include <vector>
#include <climits>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<string> words;
    string word;
    while (cin >> word) {
        words.push_back(word);
    }
    if (words.empty()) {
        cout << endl;
        return 0;
    }
    int common_mask = (1 << 26) - 1;
    for (const string& w : words) {
        int word_mask = 0;
        for (char c : w) {
            word_mask |= (1 << (c - 'a'));
        }
        common_mask &= word_mask;
    }
    for (int i = 0; i < 26; i++) {
        if (common_mask & (1 << i)) {
            cout << (char)('a' + i);
        }
    }
    cout << endl;
    return 0;
}