#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, z;
        cin >> x >> y >> z;
        int result = y * (x ^ z) + (x * z);
        if (result == 1)
        {
            cout << "Not now"  << endl;
        }
        else
        {
            cout <<"Water filling time"<< endl;
        }
    }
}