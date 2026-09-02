#include <stdio.h>

int main() {
    int units;
    char type;
    
    printf("Enter number of units: ");
    scanf("%d", &units);
    getchar(); 
    
    double rate;
    if (units <= 100 && units >= 0) {
        rate = 0.50;
    } else if (units <= 300 && units >= 101) {
        rate = 0.75;
    } else {
        rate = 1.20;
    }
    
    printf("\nRate: $%.2f/unit\n", rate);
    
    printf("Enter user type (c:commercial, i:industrial, r:residential): ");
    scanf("%c", &type);
    
    double adj_rate = 0.0;
    const char* adj_desc;
    if (type == 'c' || type == 'C') {
        adj_rate = 0.0;
        adj_desc = "No adjustment (commercial)";
    } else if (type == 'i' || type == 'I') {
        adj_rate = 0.20;
        adj_desc = "+20% surcharge (industrial)";
    } else if (type == 'r' || type == 'R') {
        adj_rate = 0.15;
        adj_desc = "+15% surcharge (residential)";
    } else {
        printf("Invalid type, assuming residential +15%.\n");
        adj_rate = 0.15;
        adj_desc = "+15% surcharge (default)";
    }
    
    double base_cost = units * rate;
    double adjustment_amount = base_cost * adj_rate;
    double final_total = base_cost + adjustment_amount;
    
    printf("\nTAX INVOICE\n");
    printf("Units consumed: %d\n", units);
    printf("Base cost: $%.2f\n", base_cost);
    printf("Type adjustment: %s ($%.2f)\n", adj_desc, adjustment_amount);
    printf("Final surcharge: $%.2f\n", final_total);
    
    return 0;
}
