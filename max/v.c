#include<stdio.h>
int main() {
    int n, k;
    scanf("%d%d", &n, &k);
    int a[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++) {
        int s = 0;
        for (int j = i; j < n; j++) {
            s += a[j];
            if (s == k) {
                printf("Indices (%d, %d) with sum %d\n", i, j, k);
            }
        }
    }

    return 0;
}


	
