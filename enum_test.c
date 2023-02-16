#include<stdio.h>

struct Date {
    int month;
    int day;
    char *month_name;
    char *day_name;
} Public_Holiday1 = {12, 24, "DEC", "Wed"}, Public_Holiday2 = {12, 25, "DEC", "THUR"}; 
//-> these default setup is called identifier-lists.


typedef struct Date Date;

int main() {
    Date *Christmas = &Public_Holiday1;
    printf("Holiday 1 is on %d %d %s %s\n", Christmas->month, Christmas->day, Christmas->month_name, Christmas->day_name);
    Christmas = &Public_Holiday2;
    printf("Holiday 2 is on %d %d %s %s\n", Christmas->month, Christmas->day, Christmas->month_name, Christmas->day_name);

    Date custom_holiday;
    custom_holiday.month = 1;
    custom_holiday.day = 1;
    custom_holiday.month_name = "Jan";
    custom_holiday.day_name = "Mon";
    printf("Custom Holiday is on %d %d %s %s\n", custom_holiday.month, custom_holiday.day, custom_holiday.month_name, custom_holiday.day_name);
}
