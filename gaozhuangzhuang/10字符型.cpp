#include <iostream>
using namespace std;
int main()
{
    // 创建字符型变量的时候要用单引号括起来的字符
    char ch2 = 'a';
    cout << "ch2=" << ch2 << endl;

    char ch1 = 'b';
    cout << "ch1=" << ch1 << endl;

    // 字符型变量对应的ASCII码值
    cout << "ch2 对应的ASCII码值为：" << (int)ch2 << endl;
    cout << "ch1 对应的ASCII码值为：" << (int)ch1 << endl;

    // 字符型变量占用的内存空间
    cout << "ch2 占用的内存空间为：" << sizeof(ch2  ) << "字节" << endl;
    cout << "ch1 占用的内存空间为：" << sizeof(ch1  ) << "字节" << endl;
    return 0;
}