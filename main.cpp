
#include <bits/stdc++.h>
using namespace std;

bool areBracketsBalanced(string exp) {
    stack<char> temp;
    for (int i = 0; i < exp.length(); i++) {
        if (temp.empty()) {
            temp.push(exp[i]);
        } else if ((temp.top() == '(' && exp[i] == ')') ||
                   (temp.top() == '{' && exp[i] == '}') ||
                   (temp.top() == '[' && exp[i] == ']')) {
            temp.pop();
        } else {
            temp.push(exp[i]);
        }
    }
    return temp.empty();
}

int main() {
    string exp;
    cin>>exp;
    if (areBracketsBalanced(exp))
        cout << "Balanced";
    else
        cout << "Not Balanced";
    return 0;
}

