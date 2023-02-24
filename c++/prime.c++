#include <iostream>
using namespace std;
int main()
{
    int n,x=2;
    cin >> n;
    while ( x<n)
    {
    if(n%x == 0)
        {
            cout<<"not prime for "<< x << endl;
        }
        else{
            cout<<"prime for "<< x <<endl;
        }
        x++;
    }
}