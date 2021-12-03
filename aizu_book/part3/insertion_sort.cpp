#include<iostream>
using namespace std;

/* 配列の要素を順に出力 */
void trace(int A[], int N) {
    int i;
    for (i = 0; i < N; i++) {
        if (i > 0) printf(" "); /* 隣接する要素の間に1つの空白を出力 */
        printf("%d", A[i]);
    }
    printf("\n");
}

/* 挿入ソート */

void insertionsort(int A[], int N) {
    int i, j, v;
    for (i = 1; i < N; i++ ) {
        v = A[i];
        j = i-1;
        while (j >= 0 && A[j] > v) {
            A[j+1] = A[j];
            j--;
        }
        A[j+1] = v;
        trace(A, N);
    }
}

int main() {
    int N, i, j;
    int A[100];

    scanf("%d", &N);
    for (i = 0; i < N; i++ ) scanf("%d", &A[i]);

    trace(A, N);
    insertionsort(A, N);

    return 0;
}