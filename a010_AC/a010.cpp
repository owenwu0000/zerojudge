#include <iostream>

using namespace std;

int main()

{

    int n, i=2, a=0;
    cin >> n;
    while (n > 1)
    {
        while (n%i==0)
        {
            n /= i;
            a += 1;
        }
        if (a != 0)
        {
            if (a == 1)
            {
                cout << i;
            }
            else
            {
            cout << i << "^" << a;
            }
            if (n != 1)
            {
                cout << " " << "*" << " ";
            }
        }
        i += 1;
        a = 0;
    }
    return 0;
}