#include<string>
#include<vector>
#include<iostream>
#include<algorithm>
#include<queue>
#include<stack>
#include <stdio.h>
#include <cstring>

using namespace std;

#define f first
#define s second
#define ii pair <int,int>

const int bignum = 1000000007;

int main() {
    
    int n,m,rock[1002][1002];
    memset(rock,0,sizeof(rock));
    char document[1002][1002];

    cin >> m >> n;
    for(int i = 1; i <= n; ++i)
    {
        for(int j = 1; j <= m; ++j)
        {
            cin >> document[i][j];
        }
    }
    for(int i = 1; i <= n; ++i)
    {
        if(i == 1)
        {
        for(int j = 1; j <= m; ++j)
        {
            if(document[i][j] == 'Y')
            {
                rock[i][j] = 1;
                if(n == 1)
                {
                    cout << "YES";
                    return 0;
                }
            }
        }
        }
        else
        {
            for(int j = 1; j <= m; ++j)
            {
                if(j > 1)if(document[i][j] == 'E' && rock[i-1][j-1] == 1 && document[i-1][j] != 'R')rock[i][j] = 1;
                if(j < m)if(document[i][j] == 'E' && rock[i-1][j+1] == 1 && document[i-1][j] != 'R')rock[i][j] = 1;
                if(document[i][j] == 'E' && rock[i-1][j] == 1)rock[i][j] = 1;
                if(i == n && rock[i][j] == 1)
                {
                    cout << "YES";
                    return 0;
                }
            }
        }
    }
    cout << "NO";
    return 0;
}