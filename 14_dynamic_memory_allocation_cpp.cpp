#include <bits/stdc++.h>
using namespace std;

int main()
{
    int *p;
    p = new int;
    *p = 10;
    cout << *p << endl;
    delete p;
    p = new int[5];
    for (int i = 0; i < 5; i++)
    {
        *(p + i) = i + 1;
        cout << p + i << " ";
    }
    printf("\n");
    for (int i = 0; i < 5; i++)
    {
        cout << *(p + i) << " ";
    }
    delete[] p;
    return 0;
}