#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;

int main()
{
    int a[ 8 ] = { 11, 2, 29, 7, 1, 22, 16, 4 };
   sort( a,a+8 );
   
    cout << "Tablica a posortowana rosnąco: \n";
    for( int i = 0; i < 8; i++ )
         cout << a[ i ] << '\n';
   
   sort( a, a + 8, greater<int>() );
   
    cout << "Tablica a posortowana malejąco: \n";
    for( int i = 0; i < 8; i++ )
     cout << a[ i ] << '\n';
   
}