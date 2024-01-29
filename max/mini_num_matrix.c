			// find minimum in the  maxtrix
#include <stdio.h>

int main() {
    int i, j;
    int p[4][4] = {{5, 6, 1, 8}, {9, 2, 3, 4}}; 
    int min = p[0][0]; 

    for (i = 0; i < 2; i++)
    { 
        for (j = 0; j < 4; j++)
        { 
            if (p[i][j] < min)
            {
                min = p[i][j];
            }
        }
    }

    printf("Minimum value: %d\n", min);

    return 0;
}
