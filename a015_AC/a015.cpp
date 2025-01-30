#include <iostream>
using namespace std;

int main(){
    int r,c;
    while (cin >> r >> c)
    {
        int arr[r][c];
        int arrt[c][r];


        for (int i=0;i<r;i++)
        {
            for (int j=0;j<c;j++)
            {
                cin >> arr[i][j];
            }
        }

        for (int i=0;i<c;i++)
        {
            for (int j=0;j<r;j++)
            {
                arrt[i][j]=arr[j][i];
            }
        }

        for (int i=0;i<c;i++)
        {
            for (int j=0;j<r;j++)
            {
                cout << arrt[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}