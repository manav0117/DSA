#include <bits/stdc++.h>
using namespace std;
int main() {
    string s1 = "33222551";
    string result = "";

    for (int i = 0; i < s1.length(); i++) {
        int count = 1;
        while (i + 1 < s1.length() && s1[i] == s1[i + 1]) {
            count++;
            i++;
        }
        result += to_string(count) + s1[i];
    }

    cout << result <<endl;

    return 0;
}
