#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin >> s;
    s[s.length()+1]='q';
    int k;
    k=1;
    for (int i=0; i<s.length(); i++)
        if (s[i]!='a' && s[i]!='o' && s[i]!='u' && s[i]!='i' && s[i]!='e' && s[i]!='n') {
            if (s[i+1]!='a' && s[i+1]!='o' && s[i+1]!='u' && s[i+1]!='i' && s[i+1]!='e') {
                k = 0;
            }
    }
    if (k==1) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}