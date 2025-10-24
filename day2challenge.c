#include<stdio.h>
 int main()
{

float meal_cost,tip,total_bill,tax;

float sagar_share,abbu_share,sai_share;

printf("enter  mealcost:");
scanf("%f",&meal_cost);

tip=meal_cost*0.05;
tax=meal_cost*0.10;
total_bill=meal_cost+ tax+ tip;

float each_share=total_bill/3;

sagar_share=each_share + (each_share / 2);
abbu_share= each_share +(each_share / 2);
sai_share= 0;

printf("\nEach person should pay as follows:\n");
printf("sagar: %.2f\n", sagar_share);
printf("abbu: %.2f\n", abbu_share);
printf("sai: %.2f\n", sai_share);
printf("\nTotal bill: %.2f", total_bill);

return 0;
}
