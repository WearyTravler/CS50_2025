#include <stdio.h>
#include <math.h>


int main()
{
    long int cc;
    int digit_count = 0;
    int sum = 0;

    //asks user for input of card number
    do
    {
        printf("Credit Card Number Identifier: ");
        scanf("%ld", &cc);
    }
    while (cc < 1);

    //variables that store the first numbers of the cards
    int AMEX = cc / pow(10, 13);
    int MASTERCARD = cc / pow(10, 14);
    int VISA[2];
    VISA[0] = cc / pow(10, 12);
    VISA[1] = cc / pow(10, 15);

    //checksum for the luhn algorithm
    while (cc > 0)
    {
        int digit = cc % 10;
        cc /= 10;
        digit_count++;

        if (digit_count % 2 == 0)
        {
            digit *= 2;
            if (digit > 9)
            {
                digit -= 9;
            }
        }

        sum += digit;
    }

    
    if (sum % 10 == 0)
    {
        if (AMEX == 34 || AMEX == 37)
        {
            printf("AMEX\n");
        }
        else if (MASTERCARD == 51 || MASTERCARD == 52 || MASTERCARD == 53 || MASTERCARD == 54 || MASTERCARD == 55)
        {
            printf("MASTERCARD\n");
        }
        else if (VISA[0] == 4 || VISA[1] == 4)
        {
            printf("VISA\n");
        }
        else
        {
            printf("INVALID\n");
        }
    }
    else
    {
        printf("INVALID\n");
    }

    
    return 0;
}
