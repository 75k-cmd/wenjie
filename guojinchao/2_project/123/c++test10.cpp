#include<iostream>
using namespace std;

int main(){

    //整型 ：short (2)  int (4) long(4) long long (8)
    //可以用sizeof 求数据类型占用内存大小
    //语法：sizeof (数据类型、变量)

    short num1=10;
    cout<<"short 占用的内存大小："<<sizeof(num1)<<endl;
    int num2=10;
    cout<<"int 占用的内存大小："<<sizeof(int)<<endl;
    long num3=10;
    cout<<"long 占用的内存大小："<<sizeof(num3)<<endl;
    long long num4=10;
    cout<<"long long 占用的内存大小："<<sizeof(long long)<<endl;
    system("pause");
    return 0;
}