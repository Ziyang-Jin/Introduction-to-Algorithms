#include <stdio.h>
#define N 10
// This is the solution to 2.3-6 in Introduction to Algorithms
// Author: Ziyang Jin
// an iterative implementation of binary search
int binary_search(int* a, int l, int r, int x){
    int m;
    if(x <= a[l]) return l;
    if(x > a[r]) return r+1;
    while(l < r) {
        m = (l + r) / 2;
        if(x > a[m] && x <= a[m+1])
            return m+1;
        else if(x <= a[m])
            r = m;
        else 
            l = m+1;
    }
}

void insertion_sort(int* a, int n) {
    int i, key;
    for(int j = 1; j < n; j++) {
        key = a[j];
        i = binary_search(a, 0, j-1, key);
        for(int k = j-1; k >= i; k--) {
            a[k+1] = a[k];
        }
        a[i] = key;
    }
}

void print_array(int* a, int n) {
    printf("Array: [");
    for(int i = 0; i < n-1; i++)
        printf("%d, ", a[i]);
    printf("%d]\n", a[n-1]);
}

int main() {
    int a[N] = {12, 23, 1, 4, 67, 33, 82, 5, 4, 15};
    print_array(a, N);
    insertion_sort(a, N);
    print_array(a, N);
return 0;
}
