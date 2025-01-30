#include <iostream>

using namespace std;

int main()
{
    long long int N,a,b,c;
    cin >> N;
    while (N)
    {
        cin >> a >> b >> c;
        if ( a==1 )
        {
            cout << b+c << endl;
        }
        else if ( a==2 )
        {
            cout << b-c << endl;
        }
        else if ( a==3 )
        {
            cout << b*c << endl;
        }
        else if ( a==4 )
        {
            cout << b/c << endl;
        }
        N--;
    }
    return 0;
}