#include <iostream>
using namespace std;

int main(){

    system("chcp 65001");
    // 1、单精度 float a = 3.14f;
    float a = 3.1415926f;
    
    cout << "a = " << a << endl;
    ///2、双精度 double b = 3.14;
    double b = 3.1415926;
    cout << "b = " << b << endl;
    

    //统计float 和double 占用的内存空间
    cout << "float 占用的内存空间 : " << sizeof(float) << "字节" << endl;
    cout << "double 占用的内存空间 :" << sizeof(double) << "字节" << endl;


    //科学计数法
    float c = 3e2; // 3*10^2
    cout << "c = " << c << endl;


    system("pause");
    return 0;

}