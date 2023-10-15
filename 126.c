#include <stdio.h>

int leap(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int main() {
    int day, month, year;

    // Get user input
    printf("Enter day, month, and year (in format DD MM YYYY): ");
    scanf("%d %d %d", &day, &month, &year);

    // Array to hold the number of days in each month
    int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    // Adjust days in February for leap years
    if (leap(year)) {
        daysInMonth[2] = 29;
    }

    // Calculate day number
    int dayNumber = day;
    for (int i = 1; i < month; i++) {
        dayNumber += daysInMonth[i];
    }

    // Display result
    printf("Day number: %d\n", dayNumber);
    if(leap(year)){
        printf("1");
    }
    else{
        printf("0");
    }

    return 0;
}