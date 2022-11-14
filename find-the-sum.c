#include "stdio.h"

int main(){
    int line_num, input_num, i , first_num, last_num;
    scanf("%d", &line_num);

    for (i = 0; i < line_num; i++)
    {
        scanf("%d", &input_num);
        if ((10000<=input_num) && (input_num<=99999))
        {
            last_num = input_num % 10;
            first_num = (input_num - (input_num % 10000)) / 10000;
            printf("Sum = %d\n", first_num + last_num);
        } else
        {
            printf("Please Enter 5 digit input number\n");
        }
        
    }
    

    return 0;
}