#include <iostream>

using namespace std;

int main()
{
    int m,f,p,ans = 0;
    cin >> m >> f >> p;
    while(m != 0 && f != 0)
    {
        if (p != 0)
        {
            p--;
            m--;
            f--;
            ans++;
        }
        else
        {
            if(m > f)
            {
                if(m-2 >= 0)
                {
                    m = m-2;
                    f--;
                    ans++;
                }
                else
                {
                    break;
                }
            }
            else
            {
                if(f-2 >= 0)
                {
                    f = f-2;
                    m--;
                    ans++;
                }
                else
                {
                    break;
                }
            }
        }
    }
    cout << ans;
    return 0;
}