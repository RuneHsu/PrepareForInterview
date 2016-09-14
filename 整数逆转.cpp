// ref: 

#include <iostream>
#include <math.h>

using namespace std;

int reverse(int n)
{
    int res = 0;
    while (n != 0)
    {
        res = res * 10 + n % 10;
        n = n/10;
    }
    return res;
}

int main()
{
    int x, y;
    cin >> x;
    cin >> y;
    int res = reverse(x) + reverse(y);
    cout << res << endl;
    return 0;
}
