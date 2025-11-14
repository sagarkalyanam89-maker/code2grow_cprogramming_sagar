#include <stdio.h>
int main()
{
int productID[10];
char productName[10][50];
int quantity[10];
float price[10];

int count = 0;
int choice, i;

while (1)
{
printf("\n========== Inventory Management System ==========\n");
printf("1. Add Product Details\n");
printf("2. Display All Products\n");
printf("3. Inventory Analysis\n");
printf("4. Search Product by ID\n");
printf("5. Exit\n");
printf("Enter your choice: ");
scanf("%d", &choice);

if (choice == 1) {
printf("How many products do you want to enter? ");
scanf("%d", &count);

if (count > 10) {
printf("Maximum limit is 10 products!\n");
count = 10;
}

for (i = 0; i < count; i++) {
printf("\nEnter details for Product %d:\n", i + 1);
printf("Product ID: ");
scanf("%d", &productID[i]);

printf("Product Name: ");
scanf("%s", productName[i]);

printf("Quantity: ");
scanf("%d", &quantity[i]);

printf("Price: ");
scanf("%f", &price[i]);
}
}

else if (choice == 2) {
if (count == 0) {
printf("No products available! Add products first.\n");
continue;
}

printf("\n--- Product List ---\n");
printf("ID\tName\tQuantity\tPrice\n");
for (i = 0; i < count; i++) {
printf("%d\t%s\t%d\t\t%.2f\n", productID[i], productName[i], quantity[i], price[i]);
}
}

else if (choice == 3) {
if (count == 0) {
printf("No products available! Add products first.\n");
continue;
}

float totalValue = 0, value;
float highestValue, lowestValue;
int highIndex = 0, lowIndex = 0;

for (i = 0; i < count; i++) {
value = quantity[i] * price[i];
totalValue += value;

if (i == 0) {
highestValue = lowestValue = value;
}

if (value > highestValue) {
highestValue = value;
highIndex = i;
}
if (value < lowestValue) {
lowestValue = value;
lowIndex = i;
}
}

printf("\nTotal Inventory Value: %.2f\n", totalValue);
printf("Highest Value Product: %s (%.2f)\n", productName[highIndex], highestValue);
printf("Lowest Value Product: %s (%.2f)\n", productName[lowIndex], lowestValue);
}

else if (choice == 4) {
if (count == 0) {
printf("No products available! Add products first.\n");
continue;
}

int id, found = 0;
printf("Enter Product ID to search: ");
scanf("%d", &id);

for (i = 0; i < count; i++) {
if (productID[i] == id) {
printf("\nProduct Found:\n");
printf("ID: %d\nName: %s\nQuantity: %d\nPrice: %.2f\n",
productID[i], productName[i], quantity[i], price[i]);
found = 1;
break;
}
}

if (!found) {
printf("No product found with ID %d.\n", id);
}
}

else if (choice == 5) {
printf("Exiting... Thank you!\n");
break;
}

else {
printf("Invalid choice! Try again.\n");
}
}

return 0;
}
