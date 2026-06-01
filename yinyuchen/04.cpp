#include   <iostream>
using namespace std;

int main()
{
    cout << "常量的使用" << endl;
    // 常量：在程序运行过程中值不能改变的量
    // 1. 字面常量：直接写出来的值叫字面常量，如：100、3.14、'a'、"hello world"
    // 2. const修饰的常量：const修饰的变量叫常量，如：const int a = 10;
    // 3. #define定义的常量：#define定义的标识符叫常量，如：#define PI 3.14

    // 常量的使用
    // 1. const修饰的常量
    const int a = 10; // 定义一个整型常量a，值为10
    cout << "a = " << a << endl; // 输出a的值

    // 2. #define定义的常量
    #define PI 3.14
    cout << "PI = " << PI << endl; // 输出PI的值

    return 0;
}