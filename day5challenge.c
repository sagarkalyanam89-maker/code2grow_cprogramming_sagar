#include <stdio.h>

int main()
{
int age, health;
char gender;
float premium = 0, final_premium = 0;


printf("Enter age: ");
scanf("%d", &age);
printf("Enter gender (M/F): ");
scanf(" %c", &gender);
printf("Health condition (1-Healthy / 0-Unhealthy): ");
scanf("%d", &health);

if
(age < 25)
{
if (health == 1)
premium = 5000;
else
printf("Status: Not Eligible for Insurance\n");
}
else if (age >= 25 && age <= 40) {
if (health == 1)
premium = 7000;
else
premium = 9500;
}
else if (age >= 41 && age <= 60) {
if (health == 1)
premium = 10000;
else
premium = 13000;
}
else if (age > 60) {
if (health == 0) {
printf("Status: Not Eligible for Insurance\n");
return 0;
}
else
{
premium = 15000;
}
}

if (gender == 'F' || gender == 'f')
final_premium = premium - (premium * 0.10);
else
final_premium = premium;

if (!(age > 60 && health == 0)) {
printf("\nCustomer Details:\n");
printf("Age: %d\n", age);
printf("Gender: %c\n", gender);
printf("Health: %s\n", (health == 1) ? "Healthy" : "Unhealthy");
printf("Final Premium: ₹%.2f\n", final_premium);
}

return 0;
}
