#include <iostream>

using namespace std;

struct Day {
    int value;
};

struct Month {
    int value;
};

struct Year {
    int value;
};

struct Date {
    int day;
    int month;
    int year;

    Date(Day new_day, Month new_month, Year new_year) {
        day = new_day.value;
        month = new_month.value;
        year = new_year.value;
    } 
};

void PrintDate(const Date& date) {
    cout << date.day << "." << date.month << "." << date.year << "\n";
}

int main() {
    
    // Date date = {10, 11, 12}; // абсолютно нечитабельная дата

    Date date = {Day{10}, Month{11}, Year{12}};

    PrintDate(date);
    return 0;
}