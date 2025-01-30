#include<iostream>
using namespace std;
int main() 
{
    int n, a[1001],temp;
    while (cin >> n) 
    {
        for (int i = 0; i < n; i++) 
        { 
            cin >> a[i];
        }
    for (int i = 0; i < n; i++) 
    {
        for (int j = i; j < n; j++) 
        {
            if (a[i] % 10 > a[j] % 10) 
            { 
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
            else if (a[i] % 10 == a[j] % 10) 
            { 
                if (a[i] < a[j]) 
                {
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
                }
            }
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}