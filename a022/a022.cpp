#include <iostream>
using namespace std;

int main()
{
    int size;
    bool a=true;
    string str;
    cin >> str;
    size = str.size();

    for (int i=0;i<=size/2;i++)
    {
        if(str[i]==str[size-i-1])
        {
            a=true;
        }
        else if(str[i]!=str[size-i-1])
        {
            a=false;
            break;
        }
    }
    if(a==true)
    {
        cout << "yes" << "\n";
    }
    else if(a==false)
    {
        cout << "no" << "\n";
    }
    
    
}