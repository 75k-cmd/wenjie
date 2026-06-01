#include <iostream>
using namespace std;

int main()
{
    //1.创建bool类型变量
    system("chcp 65001");
    bool flag1 = true;
    cout << "flag1 = " << flag1 << endl;

    flag1 = false;
    cout << "flag1 = " << flag1 << endl;

    // 查看bool类型所占内存空间
    cout << "bool类型所占内存空间: " << sizeof(bool) << "字节" << endl;
    
    system("pause");
    return 0;

}