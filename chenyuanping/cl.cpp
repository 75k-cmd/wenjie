#include <iostream>
using namespace std;
// 常量的定义式
//1.#define 宏常量
//2.const 修饰的变量

//1.#define 宏常量

#define Day 7
int main()
{
    //Day = 14;//错误，Day是常量，一旦修改就会报错
    cout <<"一周总共有"<<Day<<"天"<<endl;
    system("pause");
    
    //2.const 修饰的变量
    const int month =12;
    //month =24;//错误const修饰的变量也是常量
    cout <<"一年总共有"<<month<<"月份"<<endl;
    return 0;
}