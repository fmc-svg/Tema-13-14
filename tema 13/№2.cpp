#include <iostream>
#include <string>
#include <map>
#include <set>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    map<int, set<string>> page_words;
    for (int i = 0; i < n; i++) {
        string word;
        int page;
        cin >> word >> page;
        page_words[page].insert(word);
    }
    for (const auto& entry : page_words) {
        int page = entry.first;
        const set<string>& words = entry.second;

        cout << page;
        for (const string& word : words) {
            cout << " " << word;
        }
        cout << endl;
    }
    return 0;
}