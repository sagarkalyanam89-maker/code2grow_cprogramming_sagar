#include <stdio.h>
int main()
{
float maths,english, social, science, telugu;
float attendance,total, percentage;
char grade,remarks[20];

printf("Enter marks in maths,english,social,science,france");
scanf("%f %f %f %f %f", &maths, &english, &social, &science, &telugu);

printf("Enter attendance percentage: ");
scanf("%f", &attendance);

if
((maths < 0 || maths > 100) || (english< 0 ||english > 100) ||
(social< 0 || social > 100) || (science < 0 || science > 100) ||
(telugu < 0 || telugu > 100) || (attendance < 0 || attendance > 100)) {
printf("\nError: Invalid input! Marks and attendance must be between 0 and 100.\n");
return 0;
}

total = maths + english + social + science +telugu;
percentage = total / 5 ;


if (attendance < 75) {
grade = 'F';
printf(remarks, "Fail (Low Attendance)");
}
else
{
if (percentage >= 45 && percentage < 50 && attendance >= 90) {
percentage += 5;
if
(percentage > 100)
percentage = 100;
}
if
(percentage >= 90)
{
grade = 'A';
printf(remarks, "Excellent");
printf("\n(Note: A+ grade awarded)\n");
}
else if
(percentage >= 80)
{
grade = 'A';
printf(remarks, "Very Good");
}
else if (percentage >= 70)
{
grade = 'B';
printf(remarks, "Good");
}
else if
(percentage >= 60)
{
grade = 'C';
printf(remarks, "Average");
}
else if
(percentage >= 50)
{
grade = 'D';
printf(remarks, "Pass");
}
else
{
grade = 'F';
printf(remarks, "Fail");
}
}

printf("\n--------------------------------------\n");
printf("Total Percentage : %.2f%%\n", percentage);
printf("Attendance       : %.2f%%\n", attendance);
printf("Final Grade      : %c\n", grade);
printf("Remarks          : %s\n", remarks);
printf("--------------------------------------\n");
return 0;
}
