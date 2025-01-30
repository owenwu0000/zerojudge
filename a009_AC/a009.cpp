#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int main()
{
    int offset=7,i;
    char c[1024];

    while (cin >> c)
    {
        for (i=0;i<strlen(c);i++)
        {
            cout << (char)((int)c[i]-offset);
        }
    }
    return 0;
}