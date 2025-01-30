#include <iostream>

using namespace std;

int main()
{
    int n,i,j,k,w,temp;

    while (cin>>n)
    {
        int a[n+1];
        for (i=0;i<n;i++)
        {
            cin >> a[i];
        }

        for (j=0;j<n-1;j++)
        {
            for (k=j+1;k<n;k++)
            {
                if (a[j]>a[k])
                {
                    temp=a[j];
                    a[j]=a[k];
                    a[k]=temp;
                }
            }
        }

        for (i=0;i<n;i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }

    return 0;
}