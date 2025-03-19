#include <stdio.h>
// define an enum for days of the week
enum days {
sunday,
monday,
tuesday,
wednesday,
thursday,
friday,
saturday
};
int main() {
enum days today = wednesday;
switch (today) {
case sunday:
printf("today is sunday.\n");
break;
case monday:
printf("today is monday.\n");
break;
case tuesday:
printf("today is tuesday.\n");
break;
case wednesday:
printf("today is wednesday.\n");
break;
case thursday:
printf("today is thursday.\n");
break;
case friday:
printf("today is friday.\n");
break;
case saturday:
printf("today is saturday.\n");
break;
}
return 0;
}
 
 
 /*
#include <stdio.h>
enum Months {
January,
February,
March,
April,
May,
June,
July,
August,
September,
October,
November,
December
};
int main() {
enum Months currentMonth = October;
printf("The current month is: ");
Switch (currentMonth) {
case January:
printf("January\n");
break;
// … (other cases for each month)
case December:
printf("December\n");
break;
}
return 0;
}*/
/*
#include <stdio.h>
// Define an enum for menu options
enum MenuOptions {
View,
Edit,
Delete,
Quit
};
int main() {
enum MenuOptions choice = Edit;
Switch (choice) {
case View:
printf("View selected.\n");
break;
case Edit:
printf("Edit selected.\n");
break;
case Delete:
printf("Delete selected.\n");
break;
case Quit:
printf("Quit selected.\n");
break;
}
return 0;
}
*/
/*
#include <stdio.h>
enum TrafficLight {
Red,
Yellow,
Green
};
int main() {
enum TrafficLight light = Green;
Switch (light) {
case Red:
printf("Stop!\n");
break;
case Yellow:
printf("Slow down.\n");
break;
case Green:
printf("Go!\n");
break;
}
return 0;
}
*/
/*
#include <stdio.h>
enum Grades {
A,
b,
c,
D,
F
};
int main() {
enum Grades studentGrade = b;
Switch (studentGrade) {
case A:
printf("Excellent!\n");
break;
case b:
printf("Good job!\n");
break;
// … (other cases for each grade)
case F:
printf("You need to improve.\n");
break;
}
return 0;
}
*/

 /*
#include <stdio.h>
enum Days {
Sunday, // Assigned 0
Monday, // Assigned 1
Tuesday, // Assigned 2
Wednesday, // Assigned 3
Thursday, // Assigned 4
Friday, // Assigned 5
Saturday // Assigned 6
};
int main() {
enum Days today = Wednesday;
printf("Today is %d\n", today); // Output: Today is 3
return 0;
}
*/