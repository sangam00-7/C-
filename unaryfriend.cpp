#include<iostream>
using namespace std;
class demo
{
    int a,b;
    public:
    demo(int x,int y)
    {
        a=x;
        b=y;
    }
    void show()
    {
        cout<<"a="<<a<<" b="<<b<<endl;
    }
    friend demo operator-(demo &obj);
};
    demo operator-(demo &obj)
    {
        demo temp(0,0);
        temp.a=-obj.a;
        temp.b=-obj.b;
        return temp;
    }
int main()
{
    demo ob(-5,10);
    ob.show();
    -ob;
    ob.show();
    return 0;
}