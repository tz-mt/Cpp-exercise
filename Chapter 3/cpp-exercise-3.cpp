#include <iostream>

using namespace std;

const int du_fen = 60;
const int fen_s = 60;

int main() {
    float degree = 0;
    float minute = 0;
    float second = 0;

    cout << "Enter a latitude in degree, minutes and seconds." << endl;
    cout << "First, enter the degree: ";
    cin >> degree;

    cout << "Next, enter the minutes of arc: ";
    cin >> minute;

    cout << "Finally, enter the seconds of arc: ";
    cin >> second;

    float mydegree = degree + minute / du_fen + second / fen_s / du_fen;
    cout << degree << " degrees, " << minute << " minutes, "
         << second << " seconds = " << mydegree << endl;

    return 0;
}