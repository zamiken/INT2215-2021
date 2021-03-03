#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

const int bignum = 1000000007;

int main()
{
    srand(time(NULL)); 
	int sum1 = 0,sum2 = 0;
    int dem = 0;

    //cach A
    while(sum1 < 100 || sum2 < 100)
    {
        dem++;
        if(dem % 2 == 1)
        {
            sum1 += rand()%6 + 1;
        }
        else sum2 += rand()%6 + 1;
    }

    //cach B
    while(sum1 < 100 || sum2 < 100)
    {
        if(sum1 <= sum2)
        {
            sum1 += rand()%6 + 1;
        }
        else sum2 += rand()%6 + 1;
    }

	return 0;
}
