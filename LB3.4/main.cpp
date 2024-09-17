#include <iostream>

using namespace std;

int main()
{
    double x; // вхідний аргумент
    double y; // вхідний параметр
    double a;
    double b;
    double R;

    cout << "x = "; cin >> x;
    cout << "y = "; cin >> y;
    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "R = "; cin >> R;

    // розгалуження в повній формі
    if (((x * x + y * y <= R * R) && (x >= -a && x <= 0) && (y >= -b && y <= b) && (x >= 0) && (y >= 0)) ||
        ((x * x + y * y <= R * R) && (x >= -a && x <= 0) && (y >= -b && y <= 0) && (x <= 0) && (y <= 0)))
        cout << "yes" << endl;
    else
        cout << "no" << endl;
    cin.get();
    return 0;
}
