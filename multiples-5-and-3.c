#include<stdio.h>


void print_multiples() 
{
    int counter = 3;
    int sum     = 0;
    while (counter < 1000) 
    {
        if (counter % 3 == 0 | counter % 5 == 0)
        {
            sum = sum + counter;
        }
        counter ++;
    }
    
    printf("Sum of numbers below 1000 that are multiples of 3 and 5 is %d \n", sum);
}

int main () 
{
    print_multiples();    
    return 0;
}
