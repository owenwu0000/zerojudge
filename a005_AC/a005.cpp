#include <iostream>

using namespace std;

int main() {

    int a, b, c, d, e = 0, t;

    cin >> t;

    while (t--)
    {
        cin >> a >> b >> c >> d;
        if (b - a == c - b)
        {
            e = d + d - c;
        }
        else
        {
            e = d * (d / c);
        }
        cout << a << " " << b << " " << c << " " << d << " " << e << endl;
    }
}