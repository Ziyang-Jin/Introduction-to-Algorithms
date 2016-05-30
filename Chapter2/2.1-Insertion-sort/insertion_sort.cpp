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
