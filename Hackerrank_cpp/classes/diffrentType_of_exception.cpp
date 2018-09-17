#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Server
{
  private:
    static int load;

  public:
    static int compute(long long A, long long B)
    {
        load += 1;
        if (A < 0)
        {
            throw std::invalid_argument("A is negative");
        }
        vector<int> v(A, 0);
        int real = -1, cmplx = sqrt(-1);
        if (B == 0)
            throw 0;
        real = (A / B) * real;
        int ans = v.at(B);
        return real + A - B * ans;
    }
    static int getLoad()
    {
        return load;
    }
};
int Server::load = 0;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        long long A, B;
        cin >> A >> B;

        //try in c++
        try
        {
            cout << "Result: " << Server::compute(A, B) << endl;
        }
        //not enough memory
        catch (bad_alloc &error)
        {
            cout << "Not enough memory" << endl;
        }
        //standard exception
        catch (exception &err)
        {
            cout << "Exception: " << err.what() << endl;
        }
        //Other Exception
        catch (...)
        {
            cout << "Other Exception" << endl;
        }
    }
    cout << Server::getLoad() << endl;
    return 0;
}