#include <stdio.h>
int main()
 {

float dataUsed, finalBill, totalBeforeDiscount;
int isStudent, isCorporate;
int extraData = 0;
float discount = 0.0;
char planName[10];
int baseCost = 0;
int extraCostPerGB = 0;


printf("Enter total data used (GB): ");
scanf("%f", &dataUsed);

printf("Are you a student? (1-Yes / 0-No): ");
scanf("%d", &isStudent);

printf("Corporate user? (1-Yes / 0-No): ");
scanf("%d", &isCorporate);

if (dataUsed > 100)
{
printf("Excessive Usage – Plan Not Allowed\n");
} else {
if (dataUsed < 30) {
baseCost = 299;
extraCostPerGB = 50;
(planName, "Silver");
extraData = (dataUsed > 30) ? (int)(dataUsed - 30) : 0;
} else if (dataUsed <= 60) {
baseCost = 499;
extraCostPerGB = 40;
(planName, "Gold");
extraData = (dataUsed > 60) ? (int)(dataUsed - 60) : 0;
} else {
baseCost = 799;
extraCostPerGB = 30;
(planName, "Platinum");
extraData = (int)(dataUsed - 60);
}

totalBeforeDiscount = baseCost + (extraData * extraCostPerGB);

if (isStudent == 1 && isCorporate == 0) {
discount = 0.15;
} else if (isCorporate == 1 && isStudent == 0) {
discount = 0.10;
} else if (isStudent == 1 && isCorporate == 1) {
discount = 0.15;
}

finalBill = totalBeforeDiscount * (1 - discount);

printf("\nUser Plan Summary:\n");
printf("Data Used: %.0f GB\n", dataUsed);
printf("Selected Plan: %s\n", planName);
printf("Base Cost: ₹%d\n", baseCost);
printf("Extra Data: %d GB\n", extraData);

if (extraData > 0) {
printf("Total (before discount): ₹%.2f\n", totalBeforeDiscount);
}

if (discount > 0.0) {
printf("Discount Applied: %.0f%%\n", discount * 100);
} else {
printf("Discount Applied: None\n");
}
printf("Final Bill: ₹%.2f\n", finalBill);
}
return 0;
}
