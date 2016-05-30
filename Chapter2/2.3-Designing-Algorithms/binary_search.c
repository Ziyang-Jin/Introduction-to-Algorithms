#include <stdio.h>
#define N 100
// assume a[l ... r] is sorted
int binary_search(int* a, int l, int r, int x){
    if(l <= r) {
        int m = (l + r) / 2;
        if(x == a[m])
            return m;
        else if(x < a[m])
            return binary_search(a, l, m-1, x);
        else
            return binary_search(a, m+1, r, x);
    } else
        return -1;
}

int main(){
    int a[N];
    for(int i = 0; i < N; i++)
        a[i] = i;
    printf("%d\n", binary_search(a, 0, N-1, 233));
    printf("%d\n", binary_search(a, 0, N-1, 10));
    printf("%d\n", binary_search(a, 0, N-1, 73));
return 0;
}
