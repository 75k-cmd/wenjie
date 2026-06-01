#include <iostream>
using namespace std;

int main()
{
    //1单精度 float
    //2双精度 double

    float f1 = 3.14f;
    cout << "f1=" << f1 << endl;
    double dl = 3.1415926;
    cout << "dl=" << dl << endl;
    //统计float和double占用的内存空间
    cout << "float 占用内存空间为:" << sizeof(float) << endl;   //4字节
    cout << "double 占用内存空间为:" << sizeof(double) << endl; //8字节
    float f2 = 3e2;  //3*10^2
    float f3 = 3;
    system("pause");
    return 0;
}
