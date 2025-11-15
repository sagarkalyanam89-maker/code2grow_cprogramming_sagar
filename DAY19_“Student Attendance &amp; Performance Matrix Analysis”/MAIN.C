#include <stdio.h>

int main() {
int attendance[5][5], marks[5][5];
char names[5][20];
int i,j,choice;

printf("Enter names of 5 students:\n");
for(i=0;i<5;i++){
scanf("%s", names[i]);
}

printf("\nEnter Attendance (1=Present, 0=Absent):\n");
for(i=0;i<5;i++){
printf("\nStudent %s:\n", names[i]);
for(j=0;j<5;j++){
scanf("%d", &attendance[i][j]);
}
}

printf("\nEnter Marks (0-100):\n");
for(i=0;i<5;i++){
printf("\nStudent %s:\n", names[i]);
for(j=0;j<5;j++){
scanf("%d", &marks[i][j]);
}
}

while(1){
printf("\n========= MENU =========\n");
printf("1. Display Attendance Matrix\n");
printf("2. Display Marks Matrix\n");
printf("3. Attendance Report\n");
printf("4. Performance Report\n");
printf("5. Grade Report\n");
printf("6. Exit\n");
printf("========================\n");
printf("Enter your choice: ");
scanf("%d", &choice);

if(choice == 6) break;

switch(choice){

case 1:
printf("\nAttendance Matrix:\n");
for(i=0;i<5;i++){
for(j=0;j<5;j++){
printf("%d ", attendance[i][j]);
}
printf("\n");
}
break;

case 2:
printf("\nMarks Matrix:\n");
for(i=0;i<5;i++){
for(j=0;j<5;j++){
printf("%d ", marks[i][j]);
}
printf("\n");
}
break;

case 3: {
int total, highest=0, lowest=999, highIndex=0, lowIndex=0;

printf("\nAttendance Report:\n");
for(i=0;i<5;i++){
total = 0;
for(j=0;j<5;j++){
total += attendance[i][j];
}
printf("%s: Present = %d, Absent = %d\n", names[i], total, 5-total);

if(total > highest){
highest = total;
highIndex = i;
}
if(total < lowest){
lowest = total;
lowIndex = i;
}
}
printf("Highest Attendance: %s (%d)\n", names[highIndex], highest);
printf("Lowest Attendance: %s (%d)\n", names[lowIndex], lowest);
break;
}

case 4: {
int total, highest=0, lowest=999, highIndex=0, lowIndex=0;

printf("\nPerformance Report:\n");
for(i=0;i<5;i++){
total = 0;
for(j=0;j<5;j++){
total += marks[i][j];
}
printf("%s: Total = %d, Average = %.2f\n", names[i], total, total/5.0);

if(total > highest){
highIndex = i;
}
if(total < lowest){
lowest = total;
lowIndex = i;
}
}
printf("Top Performer: %s (%d)\n", names[highIndex], highest);
printf("Lowest Performer: %s (%d)\n", names[lowIndex], lowest);
break;
}

case 5: {
int total;
float avg;

printf("\nGrade Report:\n");
for(i=0;i<5;i++){
total = 0;
for(j=0;j<5;j++){
total += marks[i][j];
}
avg = total / 5.0;

char grade;
if(avg >= 90) grade = 'A';
else if(avg >= 80) grade = 'A';
else if(avg >= 70) grade = 'B';
else if(avg >= 60) grade = 'C';
else if(avg >= 50) grade = 'D';
else grade = 'F';

printf("%s: Average = %.2f, Grade = %c\n", names[i], avg, grade);
}
break;
}

default:
printf("Invalid choice. Try again.\n");
}
}

return 0;
}
