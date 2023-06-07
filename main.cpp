#include <iostream>
using namespace std;
int main()
{
    int a ,b, k;
    a=0;
    b=1;
    cin >> k;
    while (k<=0)
    {
        cout << "ERROR! Enter the number greater than zero: ";
        cin >> k;
    }
    while (k!=0)
    {
        a=a+b;
        b=a-b;
        k=k-1;
        cout << a << " ";
    }
    return 0;
}