#include<iostream>
#include<windows.h>
using namespace std;
int main(){
    SetConsoleOutputCP(CP_UTF8);
    // 比较运算符
    // ==
    int a = 20;
    int b = 10;
    cout << (a == b) << endl;
    // ！=
    cout << (a != b) << endl;
    // <=
    cout << (a <= b) << endl;
    // >=
    cout << (a >= b) << endl;

    system("pause");
    return 0;
}