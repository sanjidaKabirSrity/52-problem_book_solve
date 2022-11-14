#include "stdio.h"

int main() {
    int count_num, input_num, i, j; 
    scanf("%d", &count_num); // input count of number

    for (i = 0; i < count_num; i++)
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