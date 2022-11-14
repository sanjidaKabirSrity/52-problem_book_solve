#include "stdio.h"

int main () {
    int line_num, input_num, i, j;
    scanf("%d", &line_num);

    for (i = 0; i < line_num; i++)
    {
        scanf(" %d", &input_num);
        printf("Case %d: ", i+1);
        for (j = 1; j <= input_num; j++)
        {
            if (input_num % j == 0)
            {
                printf("%d ", j);
            }
            
        }
        printf("\n");
        
    }
    

    return 0;
}