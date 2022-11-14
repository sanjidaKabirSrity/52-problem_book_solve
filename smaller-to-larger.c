#include "stdio.h"

int main () {
    int line_num, i, j, n1, n2, n3;
    scanf("%d", &line_num);

    for (i = 0; i < line_num; i++)
    {
        scanf("%d %d %d", &n1, &n2, &n3);

        printf("Case %d: ", i+1);
        if ((n3 < n2) < n1)
        {
            printf("%d %d %d\n", n3, n2, n1);
        } else if ((n1 < n3) < n2)
        {
            printf("%d %d %d\n", n1, n3, n2);
        } else if ((n2 < n1) < n3)
        {
            printf("%d %d %d\n", n2, n1, n3);
        }
        else if ((n3 < n1) < n2)
        {
            printf("%d %d %d\n", n3, n1, n2);
        } else if ((n1 < n2) < n3)
        {
            printf("%d %d %d\n", n1, n2, n3);
        } else if ((n2 < n3) < n1)
        {
            printf("%d %d %d\n", n2, n3, n1);
        }
        else if ((n1 < n3) < n2)
        {
            printf("%d %d %d\n", n1, n3, n2);
        } else if ((n2 < n1) < n3)
        {
            printf("%d %d %d\n", n2, n1, n3);
        } else if ((n3 < n2) < n1)
        {
            printf("%d %d %d\n", n3, n2, n1);
        }
        
    }
    return 0;
}