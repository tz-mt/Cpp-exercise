#include <iostream>
using namespace std;

const long day_hour = 24;
const long hour_minute = 60;
const long minute_second = 60;

int main() {
    long long second;

    cout << "Enter the number of seconds: ";
    cin >> second;

    long seconds = second % minute_second;
    long minute = second / minute_second % hour_minute;
    long hour = second / minute_second / hour_minute % day_hour;
    long day = second / minute_second / hour_minute / day_hour;


    cout << second << "seconds = " 
         << day << " days, " 
         << hour << " hours, "
         << minute << " minutes, "
         << seconds << " seconds." << endl;

    return 0;
}