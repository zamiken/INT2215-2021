#include <iostream>
#include <<stdlib.h> 
using namespace std; 

// driver code 
int main() 
{ 
    int n;
    cin >> n;
    cout << rand()%(n-1);	
} 