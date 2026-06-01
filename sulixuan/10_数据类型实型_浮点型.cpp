
//作用：用于表示小数

#include<iostream>
using namespace std;
int main(){
    
    //单精度 float
    float f1 = 3.14f;

    cout <<"f1 = "<< f1 << endl;

    //双精度 double
    double d1 = 3.1415926;

    cout <<"d1 = "<< d1 << endl;

    cout <<"float占用的内存空间："<< sizeof(float) << endl;
    cout <<"double占用的内存空间："<< sizeof(double) << endl;

    cin.get();
    return 0;
}
