#include<string>
#include<vector>
#include<iostream>
#include<algorithm>
#include<queue>
#include<stack>

using namespace std;

#define f first
#define s second
#define ii pair <int,int>

const int bignum = 1000000007;

int main() {
    
    int n,m;
    cin >> n;
    int a[10002];
    for(int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        a[x]++;
    }
    for(int i = 0; i <=n; ++i)
    {
        int x;
        cin >> x;
        a[x]--;
        if(a[x] == -1)
        {
            cout << x;
            return 0;
        }
    }
    return 0;
}