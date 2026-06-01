#include <iostream>
#include <windows.h>
using namespace std;
int main(){
    SetConsoleOutputCP(CP_UTF8);
    // 逻辑运算符 或 || (如果a和b有一个为真，结果则真， 二者都为假, 结果则假)
    //一真一假
    int a = 10;
    int b = 0;
    cout << (a||b) << endl;
    //同真
    int a1 = 10;
    int b1 = 10;
    cout << (a1||b1) << endl;
    //同假
    int a2 = 0;
    int b2 = 0;
    cout << (a2||b2) << endl;
    // 有真则真，同假为假
    system("pause");
    return 0;
}