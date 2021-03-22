#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

const int bignum = 70;

int main()
{
    int x;
    int* y = &x;
    delete y; // chương trình lỗi do khai báo y không có toán tử new;
}