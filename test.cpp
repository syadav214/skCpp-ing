/* Compile with c++11
g++ -std=c++11 test.cpp
*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    map<string, int> m;
    for (int i = 0; i < n; i++)
    {
        int type;
        string X;
        cin >> type >> X;
        switch (type)
        {
        case 1:
            int Y;
            cin >> Y;
            if (m.count(X) > 0)
            {
                Y += m[X];
                // m[X] +=Y;
            }

            /* We can find a key using below code
             map<string,int>::iterator itr = m.find(X);
              if(itr == m.end())
              {
                  //NOT FOUND
              }
            */

            m[X] = Y;
            //m.insert({X,Y});
            break;
        case 2:
            m.erase(X);
            break;
        case 3:
            if (m.count(X) == 0)
            {
                cout << 0 << endl;
            }
            else
            {
                cout << m[X] << endl;
            }
            break;
        }
    }

    return 0;
}
