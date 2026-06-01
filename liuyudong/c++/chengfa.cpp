#include <iostream>
using namespace std;
int main()
{
  
    for (int j=1;j<=9;j++)
    {
        for (int i=1;i<=j;i++)
        {
             cout << i << "*" << j << "=" << i * j << "\t";
        }
        cout<<endl;
    }
    return 0;
}