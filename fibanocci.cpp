#include <iostream>
using namespace std;
int main()
{
    int a, b, c, i;
    a = 0;
    b = 1;
    cout << a << endl;
    cout << b << endl;
    for (i = 1; i <= 50; i++)
    {
        c = a + b;
        cout << c << endl;
        a = b;
        b = c;
    }
    return 0;
}
