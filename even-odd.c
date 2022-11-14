#include "stdio.h"

int main() {
    int line_num, input_num, i; 
    scanf("%d", &line_num); // input Line number

    for (i = 0; i < line_num; i++)
    {
        scanf("%d", &input_num); // input int number

        if (input_num % 2 == 0)
        {
            printf("even\n");
        } else
        {
            printf("odd\n");
        }
    }

    return 0;
}