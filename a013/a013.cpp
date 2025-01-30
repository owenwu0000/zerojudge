#include <iostream>
#define I 1
#define V 5
#define X 10
#define L 50
#define C 100
#define D 500
#define M 1000
using namespace std;

int main()
{
    string num1,num2;
    int x1,x2;

    cin >> num1 >> num2;

    int len1 = num1.length();
    int len2 = num2.length();
    char n1[len1],n2[len2];

    n1[1] = num1[1];
    n1[len1] = num1[len1];
     
    

    for (int i=0;i<=len1;i++)
    {
        n1[i] = num1[i];
        switch (n1[i])
        {
            case 'I':n1[i]=I;
                break;
            case 'V':n1[i]=V;
                break;
            case 'X':n1[i]=X;
                break;
            case 'L':n1[i]=L;
                break;    
        }
        int a = n1[i]-1;
        
    }
    

    return 0;
}