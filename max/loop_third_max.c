			//  loop third max.......

#include <stdio.h>
#include <limits.h> 

int main() {
    int n;
    scanf("%d", &n);

    int max = 0;
    int SMax = 0;
    int TMax = 0; 

    for (int i = 1; i <= n; i++)
    {
        int a;
        scanf("%d", &a);

        if (a > max)
        {
            TMax = SMax;
            SMax = max;
            max = a;
        }
        else if (a > SMax && a != max)
        {
            TMax = SMax;
            SMax = a;
        }
        else if (a > TMax && a != max && a != SMax)
        {
            TMax = a;
        }
    }

    printf("Third maximum: %d\n", TMax);

    return 0;
}


