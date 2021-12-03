#include <iostream>
#include <string>
using namespace std;

bool hantei(string S) {
    int dep = 0;
    for (int i = 0; i < S.size(); i++){
        if (S[i] == '(') dep += 1;
        if (S[i] == ')') dep -= 1;
        if (dep < 0) return false;
    }
    if (dep == 0) return true;
    return false;
}

int main(){
    int N;
    cin >> N;
    for (int i = 0; i < (1 << N); i++) {
        string cap = "";
        for (int j = N-1; j >= 0; j--) {
            if ((i & (1 << j)) == 0) {
                cap += "(";
            }
            else {
                cap += ")";
            }
        }
        if (hantei(cap)) cout << cap << endl;
    }
    return 0;
}