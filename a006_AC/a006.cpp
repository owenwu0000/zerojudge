#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a,b,c,x1=0,x2=0;

    while (cin >> a >> b >> c)
    {
        x1=(-1*b+(sqrt((b*b)-(4*a*c))))/(2*a);
        x2=(-1*b-(sqrt((b*b)-(4*a*c))))/(2*a);

        if (((b*b)-(4*a*c))>0)
        {
            cout << "Two different roots x1=" << x1 << " , x2=" << x2 << endl;
        }
        else if (((b*b)-(4*a*c))==0)
        {
            cout << "Two same roots x=" << x1 << endl;
        }
        else if (((b*b)-(4*a*c))<0)
        {
            cout << "No real root" << endl;
        }

    }

    return 0;
}