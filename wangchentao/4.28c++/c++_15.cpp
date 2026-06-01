# include <iostream>
# include <windows.h>
using namespace std;
int main(){
    SetConsoleOutputCP(CP_UTF8);
    // 加减乘除
    int a1 = 10;
    int b1 = 3;
    cout << a1 + b1 << endl;
    cout << a1 - b1 << endl;
    cout << a1 * b1 << endl;
    cout << a1 / b1 << endl; // 两个整数相除 结果依然是整数 将小数部分去除
    int a2 = 10;
    int b2 = 20;
    cout << a2 / b2 << endl;
    // int a3 = 10;
    // int b3 = 0;
    // cout << a3 / b3 << endl; 两个数字相除，除数不能为0
    float f1 = 0.12f;
    float f2 = 0.25f;
    cout << f1 / f2 << endl; // 运算结果可以是整数也可以是小数




    system("pause");
    return 0;
}