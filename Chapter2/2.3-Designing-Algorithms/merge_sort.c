#include <stdio.h>
#define N 10

void merge(int* a, int p, int q, int r) {
    int n1 = q - p + 1;
    int n2 = r - q;
    int left[n1], right[n2];
    int i, j, k;
    for(i = 0; i < n1; i++)
        left[i] = a[p+i];
    for(j = 0; j < n2; j++)
        right[j] = a[q+1+j];
    i = j = 0;
    for(k = p; k <= r; k++) {
        if(i < n1 && j < n2) {
            if(left[i] < right[j])
                a[k] = left[i++];
            else
                a[k] = right[j++];
        } else if(i < n1)
            a[k] = left[i++];
        else
            a[k] = right[j++]; 
    }
}

void merge_sort(int* a, int p, int r) {
    if(p < r) {
        int q = (p + r) / 2;
        merge_sort(a, p, q);
        merge_sort(a, q+1, r);
        merge(a, p, q, r);
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
    printf("Before - ");
    print_array(a, N); // before merge_sort
    merge_sort(a, 0, N-1);
    printf("After  - ");
    print_array(a, N); // after merge_sort
}
