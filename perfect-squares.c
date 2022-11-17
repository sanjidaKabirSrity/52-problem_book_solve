#include "stdio.h"
#include "stdbool.h"

int main () {
    int line_num, input_num, i, j;
    bool is_square;
    scanf("%d", &line_num);

    for (i = 0; i < line_num; i++)
    {
        scanf("%d", &input_num);
        for (j = 0; j < input_num; j++)
        {
            if (input_num == j*j) 
            {
                is_square = true;
                break;
            } else
            {
                is_square = false;
            }
        }

        if (is_square)
        {
            printf("Yes\n");
        } else
        {
            printf("No\n");
        }
        
        
    }
    
    
    return 0;
}