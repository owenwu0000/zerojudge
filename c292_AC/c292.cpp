#include <iostream>
using namespace std;

int main(){
    int n,path;
    cin >> n;
    cin >> path;
    int arr[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin >> arr[i][j];
        }
    }
    int currentr=(n-1)/2;
    int currentc=(n-1)/2;
    cout << arr[currentr][currentc];
    for (int i=1;i<n-1;i++)
    {
        for (int j=0;j<2;j++)
        {
            for (int k=0;k<i;k++)
            {
                switch (path)
                {
                case 0:
                    currentc--;
                    break;
                case 1:
                    currentr--;
                        break;
                case 2:
                    currentc++;
                    break;
                case 3:
                    currentr++;
                    break;
                        default:
                break;
                }
                cout << arr[currentr][currentc];
            }
            if (path==3)
            {
                path=0;
            }
            else
            {
                path++;
            }
        }
    }
    for (int i=0;i<3;i++)
    {
        for (int j=0;j<n-1;j++)
        {
            switch (path)
            {
                case 0:
                    currentc--;
                    break;
                case 1:
                    currentr--;
                        break;
                case 2:
                    currentc++;
                    break;
                case 3:
                    currentr++;
                    break;
                        default:
                break;
            }
            cout << arr[currentr][currentc];
        }
        if (path==3)
        {
            path=0;
        }
        else
        {
            path++;
        }
    }
    return 0;
}
            