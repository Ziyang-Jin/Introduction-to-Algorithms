#include <stdio.h>
#define N 10

void insertion_sort(int* a, int n) {
    int i, key;
    for(int j = 1; j < n; j++) {
        key = a[j];
        i = j - 1;
        while(i >= 0 && a[i] > key) {
            a[i+1] = a[i];
            i--;
        }
        a[i+1] = key;
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
    print_array(a, N); // before insertion_sort
    insertion_sort(a, N);
    print_array(a, N); // after insertion_sort
}
