#include <stdio.h>
int main()
{
float hra_percent, da_percent, basic_salary, tax_percent;
float hra, da, tax, net_monthly_salary, gross_salary;
int x;


printf("Enter the HRA%%: ");
scanf("%f", &hra_percent);


printf("Enter the DA%%: ");
scanf("%f", &da_percent);


printf("Enter the basic salary: ");
scanf("%f", &basic_salary);


printf("Enter the TAX%%: ");
scanf("%f", &tax_percent);


tax= basic_salary * (tax_percent / 100);
hra= basic_salary * (hra_percent / 100);
da = basic_salary * (da_percent / 100);

gross_salary = basic_salary + hra+ da- tax;

x = gross_salary > 50000;


net_monthly_salary = gross_salary/ 12;


printf("Net Monthly Salary = %.2f\n", net_monthly_salary);
printf("Gross Salary = %.2f\n", gross_salary);
printf("Is Gross Salary above 50000? %d\n" ,x);
printf("HRA =%.2f\n", hra);
printf("DA =%.2f\n", da);


return 0;
}
