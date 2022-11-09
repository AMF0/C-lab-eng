#include <stdio.h>

int main(void)
{
    //prompt the user to enter an integer

    int in;
    printf("Enter an integer number: ");
    scanf("%d", &in);

    printf("the prime numbers between 1 and %d are: ", in);
    
    //we have a loop goes through every number between two integers
		
    for(int i = 2; i <= in; i++)
    {
        int count = 0;
        for(int j = 2; j <= i; j++)
        {
            if(i%j == 0)       //we check if the number is divisble by more than one number
                count++;
        }

        if(count == 1)       //if the number is divisible by one number (the same number) then it's a prime number
            printf("%d, ", i);
    }   
}
