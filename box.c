#include "stdio.h"

int main () {
    int line_num, i, input_box_num, j, k;
    scanf("%d", &line_num);

    for (i = 0; i < line_num; i++)
    {
        scanf("%d", &input_box_num);

        for (j = 0; j < input_box_num; j++)
        {
            for (k = 0; k < input_box_num; k++)
            {
                printf("*");
            }
            printf("\n");
        }
        
    }
    

    return 0;
}