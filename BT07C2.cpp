#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

const int bignum = 70;

int main()
{
    srand(time(NULL)); 
	int tho = 0;
    int rua = 0;
    while(rua < bignum || tho < bignum)
    {
        int x = rand()%10 + 1;
        if(x > 5)rua += 3;
        else if(x > 2)rua += 1;
        else rua -= 6;
        if(rua < 0) rua = 0;

        if(x >= 9)tho += 0;
        else if(x >= 7)tho += 9;
        else if(x >= 6)tho -= 12;
        else if(x >= 3)tho += 1;
        else tho -= 2;
        if(tho < 0)tho = 0;
    }

    return 0;
}