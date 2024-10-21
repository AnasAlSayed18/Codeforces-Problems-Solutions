#include <iostream>
using namespace std;
#include <vector>
#include <bits/stdc++.h>
int main()
{
    int n,m;
    cin >> n >> m;

    if(n==1 && m==2)
        cout << 3;
    else if(n==2 && m==3)
        cout << 1;
    else if(n==3 && m==1)
        cout << 2;
    else if(n==2 && m==1)
        cout << 3;
    else if(n==3 && m==2)
        cout << 1;
    else if(n==1 && m==3)
        cout << 2;




    return 0;
}
