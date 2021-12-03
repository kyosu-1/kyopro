#include<iostream>
#include<algorithm>
#include <math.h>
using namespace std;
static const int MAX = 200000;

int main() {
    long long int R[MAX], n;

    cin >> n;
    for ( int i = 0; i < n; i++ ) {
        cin >> R[i];
    }

    long long int maxv = - 2 * pow(10,10);
    long long int minv = R[0];

    for (int i = 1; i < n; i++ ) {
        maxv = max(maxv, R[i] - minv);
        minv = min(minv, R[i]);
    }

    cout << maxv << endl;

    return 0;
}
