#include <iostream>
#include <cmath>
using namespace std;

int main()
{  
    int n,t;
    cin >> n;
    t=n>25?(85-n):(25-n);
    cout << t << endl;
    return 0;
}