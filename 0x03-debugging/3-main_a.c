#include <stdio.h>
#include "main.h"

/**
* main - takes a date and prints how many days are left in the year, taking
* leap years into account
* Return: 0
*/

int main(void)
{
int month;
int days;
int year;

month = 4;
days = 01;
year = 1997;

printf("Date: %02d/%02d/%04d\n", month, days, year);

days = convert_day(month, days);

print_remaining_days(month, days, year);

return (0);
}
