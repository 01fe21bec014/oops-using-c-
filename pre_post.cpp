#include<iostream>

using namespace std;
int main()
{
   int num,a,b;
   cout<<"Enter a Number for a and b: ";
   cin>>a>>b;

   cout<<"post_order_number="<<endl;
   a++;
   b--;

    cout << "Updated values: a=" << a << ", b=" << b << endl;

    cout<<"pre_order_number="<<endl;
    ++a;
    --b;
    cout << "Updated values: a=" << a << ", b=" << b << endl;

}



