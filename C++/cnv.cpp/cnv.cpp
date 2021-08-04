#include <bits/stdc++.h>
using namespace std;
int tab[100007];
int main()
{
    int n;
    cin >> n;
    int x = 0;
    for (int i = 0; n > 0; i++)
    {
        tab[i] = n % 10;
        n /= 10;
        x++;
    }
    cout << "[";
    for (int i = 0; i < x; i++)
    {
        cout << tab[i];
        if (i != x - 1)
        {
            cout << ",";
        }
    }
    cout << "]";
}