def insertion_sort(A, N):
    for i in range(N):
        tmp = A[i]
        j = i - 1
        while j >= 0 and A[j] > tmp:
            A[j+1] = A[j]
            j -= 1
        A[j+1] = tmp
        print(*A)

def main():
    N = int(input())
    A = list(map(int,input().split()))
    insertion_sort(A, N)

if __name__ == '__main__':
    main()