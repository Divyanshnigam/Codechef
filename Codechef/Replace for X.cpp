//https://www.codechef.com/submit/REPLESX
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    
    ll i, j, k, t, ip;
 
    cin >> t;
    while (t--)
    {
        ll n, p, a, b, c, d, x, y, z, q, r, mv = 0;
        double d1, d2;
        string s;
        vector<ll> v;
        cin >> n >> x >> p >> k;
        for (i = 0; i < n; i++)
        {
            cin >> ip;
            v.push_back(ip);
        }
        sort(v.begin(), v.end());
        c = count(v.begin(), v.end(), x);
        ll sm = 0;
        if (c == 0)
        {
            v[k - 1] = x;
            mv++;
            // cout << mv << "\n";
            sort(v.begin(), v.end());
        }
        if (v[p - 1] == x)
        {
            cout << mv << "\n";
        }
        else
        {
            ll pos = 0;
            for (i = 0; i < n; i++)
            {
                if (v[i] == x)
                {
                    pos = i;
                    break;
                }
            }
            ll sht = -1;
            ll nsht = abs(pos - (p - 1));
            if (p - 1 > pos)
            {
                //right shift
                sht = 1;
                if (k >= (p))
                {
                    for (i = 0; i < n; i++)
                    {
                        if (v[i] == x)
                        {
                            pos = i;
                        }
                    }
                    nsht = abs(pos - (p - 1));
                    //cout << mv << "mv  " << nsht << "\n";
                    cout << mv + nsht << "\n";
                }
                else
                {
                    cout << "-1\n";
                }
            }
            else
            {
                sht = 0;
                if (k <= p)
                {
                    //cout << mv << " " << nsht << "\n";
                    cout << mv + nsht << "\n";
                }
                else
                {
                    cout << "-1\n";
                }
            }
        }
    }
    return 0;
}
