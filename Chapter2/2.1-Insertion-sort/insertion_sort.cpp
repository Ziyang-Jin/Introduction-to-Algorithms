#include <iostream>

int* insertion_sort(int* A, int n) {
    for(int j = 1; j < n; j++) {
        int key = A[j];
        // insert A[j] into the sorted sequence A[1 ... j-1]
        int i = j - 1;
        while(i && A[i] > key) {
            A[i+1] = A[i];
            i--;
        }
        A[i+1] = key;
    }
return A;
}

int main() {
    int a[10] = {12, 23, 1, 4, 67, 33, 82, 1, 7, 15};
    int* b = insertion_sort(a, 10);
    for(int i = 0; i < 10; i++)
        std::cout << b[i] << " ";
    std::cout << std::endl;
return 0;
}
