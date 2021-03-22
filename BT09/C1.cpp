#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

const int bignum = 70;

char* reverse(char a[])
{
    int n = strlen(a);
    for (int i = 0; i < n/2; ++i)
    {
        swap(a[i], a[n - i - 1]);
    }
    char* ans = a;
    return ans;
}

char* delete_char(char a[], char c)
{
    int n = strlen(a);
    char ans[100002] = "";
    int dem = -1;
    for (int i = 0; i < n; ++i)
    {
        if (a[i] != c)
        {
            dem++;
            ans[dem] = a[i];
        }
    }
    return ans;
}

char* pad_right(char a[], int n)
{
    int m = strlen(a);
    char ans[100002] = "";
    for (int i = 0; i < n; ++i)
    {
        ans[i] = a[i];
    }
    if (m < n)
    {
        for (int i = m; i < n; ++i)
        {
            ans[i] = ' ';
        }
    }
    return ans;
}

char* pad_left(char a[], int n)
{
    int m = strlen(a);
    char ans[100002] = "";
    if (m < n)
    {
        for (int i = 0; i < n - m; ++i)
        {
            ans[i] = ' ';
        }
        for (int i = n - m; i < n; ++i)
        {
            ans[i] = a[i - n + m];
        }
    }
    else
    {
        for (int i = 0; i < m; ++i)
        {
            ans[i] = a[i];
        }
    }
    return ans;
}

char* truncate(char a[], int n)
{
    char ans[10002] = "";
    int m = strlen(a);
    if (n < m)
    {
        for (int i = 0; i < n; ++i)
        {
            ans[i] = a[i];
        }
    }
    return ans;
}

bool is_palindrome(char a[])
{
    int n = strlen(a);
    int dem = 0;
    for (int i = 0; i < n; ++i)
    {
        if (a[i] == a[n - i - 1])dem++;
    }
    if (dem == n)return 1;
    return 0;
}

char* trim_left(char a[])
{
    char ans[100002] = "";
    int i = 0;
    int n = strlen(a);
    int dk = 0;
    int dem = -1;
    while (i < n)
    {
        if (a[i] != ' ')dk = 1;
        if (dk == 1)
        {
            dem++;
            ans[dem] = a[i];
        }
        i++;
    }
    return ans;
}

char* trim_right(char a[])
{
    char ans[100002] = "";
    int n = strlen(a);
    int i = n - 1;
    int dk = 0;
    while (i >= 0)
    {
        if (a[i] != ' ')dk = 1;
        if (dk == 1)
        {
            ans[i] = a[i];
        }
        i--;
    }
    return ans;
}

int main()
{
    char a[] = "     wpoowppp";
    cout << trim_right(a);
    return 0;
}