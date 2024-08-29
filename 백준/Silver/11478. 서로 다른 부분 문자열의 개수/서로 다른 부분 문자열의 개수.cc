#include <iostream>
#include <set>
#include <string>

using namespace std;

int main(){
    string S;
    cin >> S;
    set<string> substrings;
    int n = S.length();
    
    for (int i = 0; i < n; ++i) {
        string temp = "";
        for (int j = i; j < n; ++j) {
            temp += S[j];
            substrings.insert(temp);}
    }
    cout << substrings.size() << endl;
    return 0;
}
