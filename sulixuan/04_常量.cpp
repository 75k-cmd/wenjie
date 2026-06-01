//1.4常量
//作用：用于记录程序中不可改的数据
#include <iostream>
using namespace std;
//c++定义常量的两种方式
//1.#define宏常量
//2.const修饰的常量
// 宏常量 ***
#define Day 7
int main(){
    //Day = 7; 错误的，Day是一个常量，一旦修改就报错
    cout <<"一周有："<<Day<<"天"<<endl;
    // 2.cinst修饰的变量***
    const int month = 12;
    //month = 24; 错误的，cinst修饰的变量也称为常量

    cout <<"一年有："<<month<<"个月份"<<endl;
    // cin.ignore(); // 清空缓冲区
    cin.get();  // 替代 system("pause")，按回车继续
    return 0;
}
//宏常量不常用已被替代
// 使用 const 的情况（首选、绝大多数场景）
// 1. 定义有物理意义、需要类型安全的常量


//1.回到 VS Code，按 Ctrl+F5 运行，此时一定会重新编译生成新的 .exe
//2.防止再次运行只改cpp原文件，而不改旧exe

// 你遇到的问题很清楚：保存（Ctrl+S）只是改了 .cpp 源文件，
// 但编译器并没有重新生成新的 .exe 文件，所以你运行的仍然是旧版本的 .exe，
// 输出的自然也是旧代码的结果（比如 122 个月份）