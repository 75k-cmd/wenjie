#include <iostream>
using namespace std;

int main()
{
    system("chcp 65001");
    //1、+-*%/ 算术运算符
    int a = 10;
    int b = 3;
    cout << "a + b = " << a + b << endl;
    cout << "a - b = " << a - b << endl;
    cout << "a * b = " << a * b << endl;
    cout << "a / b = " << a / b << endl; //整数除法，结果为整数
    cout << "a % b = " << a % b << endl; //取模，结果为余数 

    //两个小数可以相除吗
    double d1 = 3.14;
    double d2 = 2.0;
    cout << "d1 / d2 = " << d1 / d2 << endl; //结果为1.57

    // 2、++ -- 自增自减运算符
    int c = 5;
    cout << "c = " << c << endl; //5
    cout << "c++ = " << c++ << endl; //5 先使用后自增
    cout << "c = " << c << endl; //6
    cout << "++c = " << ++c << endl; //7 先自增后使用
    cout << "c = " << c << endl; //7
    // 3、关系运算符 > < >= <= == !=
    int x = 10;
    int y = 20;
    cout << "x > y: " << (x > y) << endl; //
    cout << "x < y: " << (x < y) << endl; //1
    cout << "x >= y: " << (x >= y) << endl; //
    cout << "x <= y: " << (x <= y) << endl; //1
    cout << "x == y: " << (x == y) << endl; //
    cout << "x != y: " << (x != y) << endl; //1
    // 4、逻辑运算符 && || !
    bool flag1 = true;
    bool flag2 = false;
    cout << "flag1 && flag2: " << (flag1 && flag2) << endl; //0
    cout << "flag1 || flag2: " << (flag1 || flag2) << endl; //1
    cout << "!flag1: " << (!flag1) << endl; //0
    // 5、位运算符 & | ^ ~ << >>
    int m = 5; //二进制 0000 0101
    int n = 3; //二进制 0000 0011
    cout << "m & n: " << (m & n) << endl; //
    cout << "m | n: " << (m | n) << endl; //7
    cout << "m ^ n: " << (m ^ n) << endl; //
    cout << "~m: " << (~m) << endl; //-6
    cout << "m << 1: " << (m << 1) << endl
; //10
    cout << "m >> 1: " << (m >> 1) << endl
; //2
    //

    system("pause");
    return 0;
}