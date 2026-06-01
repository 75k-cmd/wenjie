#include <iostream>
#include <windows.h>
using namespace std;
int main(){
    SetConsoleOutputCP(CP_UTF8);
    // 逻辑运算符 与 && (如果a和b都为真结果为真， 其他情况都为假, 必须两个条件都满足)
    int a = 10;
    int b = 10;
    cout << (a && b) << endl;
    int a1 = 0;
    int b1 = 10;
    cout << (a1 && b1) << endl;
    int a2 = 10;
    int b2 = 0;
    cout << (a2 && b2) << endl;
    // 同真为真，有假则假
    system("pause");
    return 0;
}