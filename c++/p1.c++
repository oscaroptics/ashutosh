#include <iostream>
using namespace std;
int main()
{
    int i = 1;
    while(i<5)
    {
        int n = 1;
        while (n < 5)
        {
            cout << i;
            n++;
        }
        cout << endl;
        i++;
    }
}