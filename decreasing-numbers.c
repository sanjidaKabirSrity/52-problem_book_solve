#include "stdio.h"

int main () {
    for (int i = 1000; i > 0 ; i--)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i == 0) {
                break;
            }
            printf("%d\t", i--);
        }
        printf("\n");
    }
    
    return 0;
}