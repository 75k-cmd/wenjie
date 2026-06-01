#include <iostream>
using namespace std;


    // 1、单行注释
    // 2、多行注释
    /*
    main是一个程序的入口
    每个程序都必须有这一个函数
    有且只有一个

    */

    // 变量创建的语法：数据类型 变量名 = 变量初始值
    // 常量的定义方式：#define 宏常量   const修饰的变量
#define Day 7

int main()
{


    system("chcp 65001");


    cout << "hello world" << endl; // 输出一个helloworld

    cout << "一周有：" << Day << "天" << endl;


    //const 修饰的变量 
    const int month = 12;
    //month = 24  错误 const修饰的变量也成为常量
    cout << "一年总共有：" << month << "月份" << endl; 
    

    int a = 10;
    cout << "a = " << a << endl;
    // 标识符不能是关键字 比如 int int = 10 
    // 正确示范：
    // 标识符第一个字只能是字符或下划线
    int abc = 10;
    int _abc = 10;
    int _123 = 10;
    // 也不可以是 int 123 = 10 
    int aaa = 100;
    cout << "aaa=" << aaa << endl;

    // 建议：给变量名起名的时候，最好能够做到建名知意
    int num1 = 10;
    int num2 = 20;
    int sum = num1 + num2;
    cout << sum << endl;

    
    
    
    // 数据类型
    
    // 1、短整型
    short num1_short = 10;

    // 2、整形
    int num2_int = 20;

    // 3、长整型
    long num3 = 30;

    // 4、长长整形
    long long num4 = 40;

    cout << "num1_short = " << num1_short << endl;
    cout << "num2_int = " << num2_int << endl;
    cout << "num3 = " << num3 << endl;
    cout << "num4 = " << num4 << endl;
    system("pause"); // 任意键窗口退出
    return 0;
}