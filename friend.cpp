#include <bits/stdc++.h>
using namespace std;
class Friend
{
    int a, b;
    friend int sum();

public:
    void read(int x, int y)
    {
        a = x;
        b = y;
    }
    void print()
    {
        cout << "a and b is guven by:" << a << b << endl;
    }
};
int sum(int x, int y)
{
   void read(int x,int y);
    int add = x + y;
    return add;
}
int main()
{
    Friend a;
    a.read(4, 6);
     a = sum(4, 6);
       a.print();
  //  a.sum(5,4);//it will through error as we can not directly call that
    cout << sum << endl;
    return 0;
}