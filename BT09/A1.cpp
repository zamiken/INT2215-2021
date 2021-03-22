#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

const int bignum = 70;

string concat(const char* x, const char* y)
{
    string ans = x;
    ans = ans + y;
    return ans;
}

int main()
{
    char x[] = "Hello";
    char y[] = "World";
    char* x1 = x;
    char* x2 = y;
    string ans = concat(x1, x2);
    cout << ans;
}