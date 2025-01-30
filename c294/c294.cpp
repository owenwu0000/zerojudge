#include<iostream>
using namespace std;

void sort(int *a,int *b,int *c)
{
    int x,y,z,temp;
    if (*a<=*b && *a<=*c)
    {
        x=*a;
        y = min(*b,*c);
        z = max(*b,*c);
    }
    else if (*b<=*a && *b<=*c)
    {
        x=*b;
        y = min(*a,*c);
        z = max(*a,*c);
    }
    else if (*c<=*a && *c<=*b)
    {
        x=*c;
        y = min(*a,*b);
        z = max(*a,*b);
    }
    cout << x << " " << y << " " << z << endl;
    *a = x;
    *b = y;
    *c = z;
}

bool yes_no_tri(int a,int b,int c)
{
    if (a+b<=c)
    {
        return false;
    }
    else
    {
        return true;
    }
}

void type_tri(int a,int b,int c)
{
    if (a*a+b*b == c*c)
    {
        cout << "Right" << endl;
    }
    else if (a*a+b*b>c*c)
    {
        cout << "Acute" << endl;
    }
    else if (a*a+b*b<c*c)
    {
        cout << "Obtuse" << endl;
    }
}

int main()
{
    int a,b,c;
    bool tri;

    while(cin >> a >> b >> c)
    {
        sort(&a,&b,&c);
        tri=yes_no_tri(a,b,c); 

        if (tri)
        {
            type_tri(a,b,c);
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}