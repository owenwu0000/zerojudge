#include <iostream>

using namespace std;

int main()
{
    int n,score;
    cin >> n;

    if (n<=10)
    {
        score = 6*n;
    }
    else if (n>=11&&n<=20)
    {
        score = 60+((n-11+1)*2);
    }
    else if (n>=21&&n<=40)
    {
        score = 80+((n-21+1)*1);
    }
    else if (n>=41)
    {
        score = 100;
    }

    cout << score << endl;

    return 0;
}