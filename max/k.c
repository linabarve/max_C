		// third second max.........
#include<stdio.h>
int main()
{
	int i,n;
	scanf("%d",&n);
	for(i = 1; i <= n;  i++)
	{
		scanf("%d"&a)
		if(a>max)
		{
		t = s;
		s = max;
		max = a;
		}
		{
		if(a>max)
		{
			if(a!=max)
			{
			t =  s;
			max = a;
			}
		}
		{
		if(a<t)
		{
			if(a!=max || a!= a)
			{
			t =  max;
			}
		}
/*

	



		//   right rotate.........
#include <stdio.h>

int main()
{
    int i, j, n, k, temp;
    
    scanf("%d %d", &n, &k);
    int a[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < k; i++)
    {
        temp = a[n - 1];
        for (j = n - 1; j >= 1; j--)
        {
            a[j] = a[j - 1];
        }
        a[i] = temp;
    }

    for (j = 0; j < n; j++)
    {
        printf("%d ", a[j]);
    }

    return 0;
}

		
		// Binary search............
#include <stdio.h>

int main() {
    int n, k, mid;
    scanf("%d", &n);
    
    int a[n];  
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);  
    }
    
    scanf("%d", &k);
    
    int s = 0, e = n - 1;  

    while (s <= e) {
        mid = s + (e - s) / 2;  
        
        if (a[mid] == k) {
            printf("%d found at index %d\n", k, mid);
        } else if (a[mid] < k) {
            s = mid + 1; 
        } else {
            e = mid - 1;  
        }
    }
    
    if (s > e) {
        printf("%d not found in the array\n", k);
    }
    
    return 0;
}
	
		//  intersection union.........
#include <stdio.h>

int main() {
    int i, j;
    int a[4] = {2, 4, 5, 6};
    int b[4] = {4, 8, 9, 12}; 

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            if (a[i] == b[j])
            {
                printf("%d ", a[i]);
            }
        }
    }

    return 0;
}



#include <stdio.h>

int main() {
    int i, j;
    int a[4] = {2, 4, 6, 8};
    int b[4] = {1, 2, 3, 4};
    int u[8];  
    int usize = 0;

    // Copy elements from array 'a' to the union array 'u'
    for (i = 0; i < 4; i++)
    {
        int isDuplicate = 0;
        for (j = 0; j < usize; j++)
        {
            if (a[i] == u[j])
            {
                isDuplicate = 1;
                break;
            }
        }
        if (!isDuplicate)
        {
            u[usize] = a[i];
            usize++;
        }
    }

    // Copy elements from array 'b' to the union array 'u'
    for (i = 0; i < 4; i++)
    {
        int isDuplicate = 0;
        for (j = 0; j < usize; j++)
        {
            if (b[i] == u[j])
            {
                isDuplicate = 1;
                break;
            }
        }
        if (!isDuplicate) {
            u[usize] = b[i];
            usize++;
        }
    }

    printf("Union Array: ");
    for (i = 0; i < usize; i++) {
        printf("%d ", u[i]);
    }
    printf("\n");

    return 0;
}
*/
