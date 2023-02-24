#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    // cout << "the value of n is: " << n << endl;
    if(n>18)
    {
        cout<<"this person can vote"<< endl;
    }
    else if(n=18)
    {
        cout<<"i don't know about this person"<< endl;
    }
    else{
        cout<<"this person can not vote"<< endl;
    }
}