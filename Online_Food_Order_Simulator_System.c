#include <stdio.h>


int calculateTotal(int prices[], int qty[], int size) {
    int total = 0;
    for (int i = 0; i < size; i++) {
        total += prices[i] * qty[i];
    }
    return total;
}

int main() {
    int n = 4;

    
    char menu[4][20] = {
        "Burger",
        "Pizza",
        "Pasta",
        "Cold Drink"
    };

    
    int prices[4] = {120, 250, 180, 60};

    
    int quantity[4];

    
    printf("----- Online Food Menu -----\n");
    printf("Item\t\tPrice (Rs)\n");
    for (int i = 0; i < n; i++) {
        printf("%s\t\t%d\n", menu[i], prices[i]);
    }

  
    printf("\nEnter quantity for each item:\n");
    for (int i = 0; i < n; i++) {
        printf("%s: ", menu[i]);
        scanf("%d", &quantity[i]);
    }

    
    int totalBill = calculateTotal(prices, quantity, n);

   
    printf("\n-----------------------------\n");
    printf("Total Bill Amount = Rs %d\n", totalBill);
    printf("-----------------------------\n");

    return 0;
}
