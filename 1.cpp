#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    // i代表行，从0到n-1
    for(int i = 0; i < n; i++)
    {
        // j代表列，从0到n-1
        for(int j = 0; j < n; j++)
        {
            // 主对角线 i==j；副对角线 i+j = n-1
            if(i == j || i + j == n - 1)
            {
                cout << '*';
            }
            else
            {
                cout << ' ';
            }
        }
        cout << endl; // 一行结束换行
    }
    return 0;
}
