#include <stdio.h>

int main() 

    {
        
        int items = 50;
        float cost_per_item = 9.99;
        float total_cost = items * cost_per_item;
        char currency = '$';

        printf("Items: %d\n\n", items);
        printf("Cost_per_item: %.2f\n\n", cost_per_item);
        printf("Total_cost: %.2f\n\n", total_cost);
        printf("Currency: %c\n\n", currency);

        return 0;

    }