#include<iostream>
#include<windows.h>
using namespace std;
int main(){
    SetConsoleOutputCP(CP_UTF8);
    int a1 = 10;
    int b1 = 3;
    cout << a1 % b1 << endl;
    //取模运算的本质就是取余数
    int a2 = 10;
    int b2 = 20;
    cout << a2 % b2 << endl;

    // int a3 = 10;
    // int b3 = 0;
    // cout << a3 % b3 << endl; //错误！ 除数不能为0


    // 两个小数不可以做取模运算




    system("pause");
    return 0;
}