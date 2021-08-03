#include <bits/stdc++.h>
using namespace std;
int *tab;
int main()
{
    int n = 0;
    cin >> n;
    int x;
    for (int i = 0; n > 0; i++)
    {
        tab[i] = n % 10;
        n /= 10;
        x++;
    }
    for (int i = 0; i < x; i++)
    {
        cout << tab[i] << "\n";
    }