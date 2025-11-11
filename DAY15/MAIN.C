#include <stdio.h>
int main()

{
int totalStudents, index;
float marks[10], sum = 0, avg, high, low;
int passed = 0, failed = 0;
int aplus = 0, a = 0, b = 0, c = 0, d = 0, f = 0;

printf("======== Student Performance Analyzer ========\n");
printf("Enter total number of students (max 10): ");
scanf("%d", &totalStudents);
for
(index = 0; index < totalStudents; index++)
{
printf("Student %d: ", index + 1);
scanf("%d", &marks[index]);
}

avg = sum / totalStudents;
high = low = marks[0];

for
(index = 0; index < totalStudents; index++)
{
if (marks[index] > high) high = marks[index];
if (marks[index] < low) low = marks[index];

if (marks[index] >= 90) { aplus++; passed++; }
else if (marks[index] >= 80) { a++; passed++; }
else if (marks[index] >= 70) { b++; passed++; }
else if (marks[index] >= 60) { c++; passed++; }
else if (marks[index] >= 50) { d++; passed++; }
else { f++; failed++; }
}

printf("\n======== Result Summary ========\n");
printf("Average Marks: %.2f\n", avg);
printf("Highest Marks: %.2f\n", high);
printf("Lowest Marks : %.2f\n", low);
printf("Total Passed Students : %d\n", passed);
printf("Total Failed Students : %d\n", failed);

printf("\nGrade Distribution:\n");
printf("A+ : %d\nA : %d\nB : %d\nC : %d\nD : %d\nFail : %d\n", aplus, a, b, c, d, f);

printf("================================\n");
return 0;
}

