#include<iostream>
using namespace std;

int main(){
    // 整形：short(2) int(4) long(4) long long(8)
    // 可以利用sizeof()函数来查看数据类型占用的字节数
    // 语法：sizeof(数据类型) 或 sizeof(变量名)

    short num1 = 10;
    cout <<"short占用的字节数 = "<< sizeof(num1) << endl;
    int num2 = 10;
    cout <<"int占用的字节数 = "<< sizeof(num2) << endl;
    long num3 = 10;
    cout <<"long占用的字节数 = "<< sizeof(num3) << endl;
    long long num4 = 10;
    cout <<"long long占用的字节数 = "<< sizeof(num4) << endl;

    cin.get();
    return 0;
}
