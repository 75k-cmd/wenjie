#include <iostream>
#include <windows.h>
using namespace std;
int main(){
    SetConsoleOutputCP(CP_UTF8);
    // 逻辑运算符 非 (真为假，假为真)
    int a = 10;
    
    // c++中除了0都为真
    cout << !a << endl;
    cout << !!a << endl; 

    system("pause");
    return 0;
}