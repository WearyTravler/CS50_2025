#include <stdio.h>
#include <math.h>


int main()
{
    long int credit_card;
    int digit_count = 0;
    int sum = 0;

    ///input credit card
    do
    {
        printf("Number: ");
        scanf("%ld", &credit_card);
    }
    while (credit_card < 1);

    
    int AMEX = credit_card / pow(10, 13);
    int MASTERCARD = credit_card / pow(10, 14);
    int VISA[2];
    VISA[0] = credit_card / pow(10, 12);
    VISA[1] = credit_card / pow(10, 15);

    //luhn algo
    while (credit_card > 0)
    {
        int digit = credit_card % 10;
        credit_card /= 10;
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

    // credit card company determination
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
