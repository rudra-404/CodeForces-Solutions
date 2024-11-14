#include<stdio.h>
#include<stdlib.h>
int main()
{
    int test;
    scanf("%d", &test);
    while(test--)
    {
        int n;
        scanf("%d", &n);
        int *a = (int *)malloc(n * sizeof(int));
        for(int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        if(n >= 3)
        {
            printf("NO\n");
        }
        else
        {
            if(abs(a[0] - a[1]) == 1)
            {
                printf("NO\n");
            }
            else
            {
                printf("YES\n");
            }
        }
        free(a);
    }
    return 0;
}
