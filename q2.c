// 2. Electricity Bill (Nested If)
// Write a C program that reads the number of electricity units consumed by a customer and calculates the total bill using the following slab system:
// 0–50 units → ₹2 per unit


// 51–100 units → ₹3 per unit


// 101–200 units → ₹4 per unit


// 201–300 units → ₹5 per unit


// 301–500 units → ₹6 per unit

// Above 500 units → ₹8 per unit
//  Add a fixed charge of ₹100 for every bill.


#include <stdio.h>
int main()
{
    int units;
    float bill = 0;

    printf("Enter the number of electricity units consumed: ");
    scanf("%d", &units);

    
    if (units < 0)
    {
        printf("Invalid input! Units cannot be negative.\n");
        return 1; 
    }

    
    if (units <= 50)
    {
        bill = units * 2;
    }
    else
    {
        if (units <= 100)
        {
            bill = 50 * 2 + (units - 50) * 3;
        }
        else
        {
            if (units <= 200)
            {
                bill = 50 * 2 + 50 * 3 + (units - 100) * 4;
            }
            else
            {
                if (units <= 300)
                {
                    bill = 50 * 2 + 50 * 3 + 100 * 4 + (units - 200) * 5;
                }
                else
                {
                    if (units <= 500)
                    {
                        bill = 50 * 2 + 50 * 3 + 100 * 4 + 100 * 5 + (units - 300) * 6;
                    }
                    else
                    {
                        bill = 50 * 2 + 50 * 3 + 100 * 4 + 100 * 5 + 100 * 6 + (units - 500) * 8;
                    }
                }
            }
        }
    }

    bill += 100;

    printf("Units Consumed: %d\n", units);
    printf("Total Electricity Bill: ₹%.2f\n", bill);

    return 0;
}
