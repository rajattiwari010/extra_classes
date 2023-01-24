#include <bits/stdc++.h>
using namespace std;
class biodata
{
    string name;
    void check(void);//we cannot directly call it by objects 
public:
    void read(void);
    void display(void);
} r;

void biodata::read()
{
    cout << "Enter the name" << endl;
    cin >> name;
}
void biodata ::check()
{
    if (name[0] == 'R')
        cout << "RIGHT" << endl;
}
void biodata::display()
{
    check();
    cout<<"Name is:"<<name<<endl;
}
int main()
{
r.read();
r.display();
    return 0;
}