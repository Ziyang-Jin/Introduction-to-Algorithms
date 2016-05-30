#include <stdio.h>
#define N 100
// assume a[l ... r] is sorted
int binary_search(int* a, int l, int r, int x){
    if(x <= a[l]) return l;
    else if(x > a[r]) return r+1;
    else if(l < r) {
        int m = (l + r) / 2;
        if(x <= a[m] && x > a[m-1])
            return m;
        else if(x <= a[m-1])
            return binary_search(a, l, m-1, x);
        else
            return binary_search(a, m+1, r, x);
    }
}

int main(){
    int a[N];
    for(int i = 0; i < N; i++)
        a[i] = 3*i;
    printf("%d\n", binary_search(a, 0, N-1, 233));
    printf("%d\n", binary_search(a, 0, N-1, 10));
    printf("%d\n", binary_search(a, 0, N-1, 73));
return 0;
}
