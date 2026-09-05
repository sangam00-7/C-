#include<iostream>
using namespace std;
class demo
{
    int a;
    public:
   void getdata()
    {
        cout<<"Enter a number: ";
        cin>>a;
    }
    void show()
    {
        cout<<"a="<<a<<endl;
    }
    demo operator-()
    {
        demo temp;
        temp.a=-a;
        return temp;
    }
};
int main()
{
    int n;
    cout<<"Enter no of items: ";
    cin>>n;
    demo c[n],result[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Item "<<i+1<<endl;
        c[i].getdata();
        c[i].show();
        result[i]=-c[i];
   
    }
    cout<<"Corrected values:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<"\nItem "<<i+1<<endl;
        result[i].show();
    }
    return 0;
}