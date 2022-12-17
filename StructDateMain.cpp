#include <iostream>

using namespace std;

struct Day {
    int value;
    explicit Day(int new_value) { // добавил exlicit конструктор, в Date date = Date(Day(10), Month(11), Year(12)) // или Date(Day{10}, Month{11}, Year{12})
        value = new_value;
    }
};

struct Month {
    int value;
    explicit Month(int new_value) {
        value = new_value;
    }
};

struct Year {
    int value;
    explicit Year(int new_value) {
        value = new_value;
    }
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