#include <iostream>
using namespace std;
#include <string> //输出c++风格的字符串时必须写


//1、单行注释

//2，多行注释

/*
    main是一个程序的入口
    每个程序必须都得有一个这样的函数
    有且只有一个

*/


// int main1()
// {
//     //在屏幕中输出hello C++
//     cout << "hello C++" << endl;

//     system("pause");

//     return 0;
// }



// 整型
// int main2()
// {
//     //变量创建的语法： 数据类型 变量名 = 变量初始值
//     int a = 10;

//     cout << "a = " << a << endl;

//     return 0;

// }

//常量的定义方式
//1、#define宏常量
//2、const 修饰的变量

//1、#define 宏常量
// #define Day 7

// int main()
// {
//     system("chcp 65001 > nul");
    
//     const int month = 12;
//     //month = 24; // 错误，const修饰的变量也是常量，不可修改

//     cout << "一周有:" << Day << "天" << endl;

//     cout << "一年有:" << month << "个月份" << endl; 

//     system("pause");

//     return 0;
// }





// sizeof关键字
// int main()
// {
//     system("chcp 65001 > nul");

//     short num1 = 10;

//     cout << "short占用的空间" << sizeof(short) << endl;

//     int num2 = 10;

//     cout << "int占用的空间" << sizeof(int) << endl;

//     long num3 = 10;

//     cout << "long占用的空间" << sizeof(long) << endl;

//     system("pause");

//     return 0;

// }




// 实型
// int main() 
// {
//     system("chcp 65001 > nul");
//     //1、单精度 float
//     //2、双精度 double
//     //默认情况下 输出一个小数 ，会显示出6位有效数字
//     float f1 = 3.1415926f;

//     cout << "f1 = " << f1 << endl;

//     double d1 = 3.1415926;

//     cout << "d1 = " << d1 << endl;

//     //统计float 和double 占用内存空间

//     cout << "float占用内存空间为:" << sizeof(float) << endl;

//     cout << "double占用内存空间为:" << sizeof(double) << endl;

//     //科学计数法
//     float f2 = 3e2; //3 * 10^2:
//     cout << "f2 = " << f2 << endl;

//     float f3 = 3e-2; // 3 * 0.1 ^ 2
//     cout << "f3 = " << f3 << endl;

//     system("pause");
    
//     return 0;
// }




// 字符型
// int main()
// {
//     //1、字符型变量创建方式
//     char ch = 'a';
//     cout << ch << endl;
//     //2、字符型变量所占大小
//     cout << sizeof(char) << endl;
//     //3、字符型变量常见错误
//     //char ch2 = "b"; //创建字符型变量时候，要用单引号
//     //char ch2 = 'abcdef' //创建字符型变量时候,单引号内只能有一个字符

//     //4.字符型变量对应ASCII编码
//     cout << (int)ch << endl;

//     system("pause");
//     return 0;

// }




// 转义字符
// int main()
// {
//     //转义字符

//     //换行符\n

//     cout << "hello word" << endl;

//     //反斜杠\\

//     cout << "\\" << endl;
    
//     //水平制表符\t

//     cout << "aaa\thelloword" << endl;
//     cout << "aaaaaa\thelloword" << endl;
//     cout << "aaaaaaaaa\thelloword" << endl;

//     system("pause");

//     return 0;

// }



// 字符串型
// int main()
// {

//     //1.c风格字符串
//     //注意事项 char 字符串名[]
//     //注意事项2 等号后面要用双引号 包含起来字符串
//     char str[] = "hello world";
//     cout << str << endl;
//     system("pause");
//     return 0;
// }

// int main()
// {

//     //2.c++风格字符串
//     //包含一个头文件
//     string str = "hello world";
//     cout << str << endl;
//     system("pause");
//     return 0;
// }


// 布尔类型
// int main()
// {
//     // 1.创建bool数据类型
//     bool flag = true;//true代表真
//     cout << flag << endl;

//     flag = false; //false代表假
//     cout << flag << endl;

//     //本质上 1代表真 0代表假
//     cout << "size of bool = " << sizeof(bool) << endl;

//     system("pause");
//     return 0;
// }


//数据输入
// int main()
// {
//     // 1.整型
//     int a = 0;
//     cout << "请输入整型变量" << endl;
//     cin >> a;
//     cout << "整型变量a=" << a << endl;

//     // 2.浮点型
//     float f = 3.14f;
//     cout << "请给浮点型变量f赋值:" << endl;
//     cin >> f;
//     cout << "浮点型变量f=" << f << endl;

//     //3.字符型
//     char ch = 'a';
//     cout << "请给字符型变量ch赋值" << endl;
//     cin >> ch;
//     cout << "字符型变量吃= " << ch << endl;

//     //4.字符串型
//     string str = "hello";
//     cout << "请给字符串 str赋值" << endl;
//     cin >> str;
//     cout << "字符串str=" << str << endl;

//     //5.布尔类型
//     bool flag = false;
//     cout << "请给布尔类型flag赋值" << flag << endl;
//     cin >> flag;
//     cout << "布尔类型flag=" << endl;
    

//     system("pause");

//     return 0;


// }



// 算法
// int main()
// {
//     int al = 10;
//     int bl = 3;

//     cout << al + bl << endl;
//     cout << al - bl << endl;
//     cout << al * bl << endl;
//     cout << al / bl << endl;

//     int a2 = 10;
//     int b1 = 3;

//     cout << al + bl << endl;
//     cout << al - bl << endl;
//     cout << al * bl << endl;
//     cout << al / bl << endl;

//     int a2 = 10;
//     int b2 = 20;

//     cout << a2 / b2 << endl;

//     int a3 = 0.5;
//     int b3 = 0.25;

//     cout << a3 / b3 << endl;

//     system("pause");

//     return 0;

// }

// 模，求余数
// int main()
// {
//     int al = 10;

//     int bl = 3;

//     cout << al % bl << endl; //求余数

//     int a2 = 10;
//     int b2 = 20;

//     cout << a2 % b2 << endl;

//     system("pause");

//     return 0;
// }



// 前置后置运算
// int main()
// {
//     //1.
//     int a = 10;
//     ++a;//让变量+1
//     cout << "a = " << a << endl;
//     //2.
//     int b = 10;
//     b++;//让变量+1
//     cout << "b = " << b << endl;
//     //3.
//     //前置递增 先让变量+1然后进行表达式运算
//     int a2 =10;
//     int b2 = ++a2 * 10;
    
//     cout << "a2=" << a2 << endl;
//     cout << "b2=" << b2 << endl;

//     int a3 = 10;
//     int b3 = a3++ * 10;
//     cout << "a3=" << a3 << endl;
//     cout << "b3=" << b3 << endl;
// }


// 赋值运算
// int main()
// {
//     //赋值运算符
//     int a = 10;
//     cout << "a = " << a << endl;

//     a = 10;
//     a += 2;
//     cout << "a = " << a << endl;
//     a = 10;
//     a -= 2;
//     cout << "a = " << a << endl;
//     a = 10;
//     a *= 2;
//     cout << "a = " << a << endl;
//     a = 10;
//     a /= 2;
//     cout << "a = " << a << endl;
//     a = 10;
//     a %= 3;
//     cout << "a = " << a << endl;

// }



//关系运算符
// int main()
// {
//     //关系运算符
//     int a = 10;
//     int b = 20;

//     cout << (a > b) << endl; //false
//     cout << (a < b) << endl; //true
//     cout << (a >= b) << endl; //false
//     cout << (a <= b) << endl; //true
//     cout << (a == b) << endl; //false
//     cout << (a != b) << endl; //true

//     system("pause");

//     return 0;
// }



// // 逻辑运算符
// int main()
// {
//     int a = 10;
//     int b = 10;

//     cout << (a && b) << endl; //逻辑与 只有a和b都为真才为真

//     a = 0;
//     b = 10;

//     cout << (a || b) << endl; //逻辑或 只要a和b有一个为真就为真


//     system("pause");
//     return 0;
// }


// // if 判断
// int main()
// {
//     system("chcp 65001 > nul");
//     //选择结构 单行if语句
//     //用户输入分数，如果分数大于等于600，视为考上一本大学
//     int score = 0;
//     cout << "请输入您的分数: " << endl;
//     cin >> score;

//     if (score >= 600)
//     {
//         cout << "恭喜您考上了一本大学！" << endl;
//     }
//     else
//     {
//         cout << "很遗憾，您没有考上一本大学。" << endl;
//     }

//     system("pause");
//     return 0;
// }


// int main()
// {
//     system("chcp 65001 > nul");
//     //选择结构 多条件if语句
//     //输入一个考试分数，如果大于600分，视为考试一本大学，在屏幕输出
//     //大于500，视为考是二本
//     //大于400，视为考上三本
//     //小于400分，未考上本科
//     //1.用户输入分数
//     int score = 0;
//     cout << "请输入考试分数" << endl;
//     cin  >> score;
//     //2.提示用户输入分数
//     cout << "您输入的考试分数为：" << score << endl;
//     //3.判断
//     if (score > 600)
//     {
//         cout << "恭喜您考上了一本大学！" << endl;
//     }
//     else if (score > 500)
//     {
//         cout << "恭喜您考上了二本大学！" << endl;
//     }
//     else if (score > 400)
//     {
//         cout << "恭喜您考上了三本大学！" << endl;
//     }
//     else
//     {
//         cout << "很遗憾，您没有考上本科。" << endl;
//     }

//     system("pause");
//     return 0;

// }



// //嵌套if语句

// int main()
// {
//     system("chcp 65001 > nul");
//     //选择结构 嵌套if语句
//     //输入一个考试分数，如果大于600分，视为考试一本大学，在屏幕输出
//     //大于500，视为考是二本
//     //大于400，视为考上三本
//     //小于400分，未考上本科
//     //1.用户输入分数
//     int score = 0;
//     cout << "请输入考试分数" << endl;
//     cin  >> score;
//     //2.提示用户输入分数
//     cout << "您输入的考试分数为：" << score << endl;
//     //3.判断
//     if (score > 600)
//     {
//         cout << "恭喜您考上了一本大学！" << endl;
//         if (score > 650)
//         {
//             cout << "您考上了一所985大学！" << endl;
//         }
//         else
//         {
//             cout << "您考上了一所211大学！" << endl;
//         }
        
//     }
//     else if (score > 500)
//     {
//         cout << "恭喜您考上了二本大学！" << endl;
//     }
//     else if (score > 400)
//     {
//         cout << "恭喜您考上了三本大学！" << endl;
//     }
//     else
//     {
//         cout << "很遗憾，您没有考上本科。" << endl;
//     }

//     system("pause");
//     return 0;
// }






// // 练习案例：三只小猪称体重工
// // 有三只小猪ABC，请分别输入三只小猪的体重，并且判断哪只小猪最重？
// int main()
// {
//     system("chcp 65001 > nul");
//     //1.用户输入三只小猪的体重
//     float A = 0.0f;
//     float B = 0.0f;
//     float C = 0.0f;

//     cout << "请输入小猪A的体重" << endl;
//     cin >> A;

//     cout << "请输入小猪B的体重" << endl;
//     cin >> B;

//     cout << "请输入小猪C的体重" << endl;
//     cin >> C;

//     //2.比较三只小猪的体重，判断哪只最重
//     if (A > B)
//     {
//         if (A > C)
//         {
//             cout << "小猪A最重！" << endl;
//         }
//         else
//         {
//             cout << "小猪C最重！" << endl;
//         }
        
//     }
//     else
//     {
//         if (B > C)
//         {
//             cout << "小猪B最重！" << endl;
//         }
//         else
//         {
//             cout << "小猪C最重！" << endl;
//         }
        
//     }

//     system("pause");
    
//     return 0;
// }




// //三目运算符
// int main()
// {
//     system("chcp 65001 > nul");
//     //三目运算符
//     //语法：a？b：c
//     //如果a的结果为真，整个三目运算的结果就是b的结果
//     //如果a的结果为假，整个三目运算的结果就是c的结果

//     int a = 10;
//     int b = 20;

//     int max = (a > b) ? a : b;

//     cout << "max = " << max << endl;

//     system("pause");

//     return 0;
// }



// //switch语句
// int main()
// {
//     system("chcp 65001 > nul");
//     //给电影打分
//     //10 到 9 经典
//     //8 到 7 非常好
//     //6 到 5 一般
//     //5 以下 烂片
    

//     //1.用户输入电影分数
//     //2.提示用户输入电影分数
//     //3.判断电影分数对应的评价
//     cout << "请给电影打分" << endl;

//     int score = 0;
//     cin >> score;
//     cout << "您给《肖申克的救赎》电影的分数为：" << score << endl;

//     switch (score)
//     {
//     case 10:
//     case 9:
//         cout << "经典" << endl;
//         break;
//     case 8:
//     case 7:
//         cout << "非常好" << endl;
//         break;
//     case 6:
//     case 5:
//         cout << "一般" << endl;
//         break;
//     default:
//         cout << "烂片" << endl;
//         break;
//     }

// }


//while循环结构
int main()
{
    system("chcp 65001 > nul");
    //循环结构 while循环
    //1.输出0-10的整数
    int i = 0; //循环变量 初始化
    while (i <= 10) //循环条件
    {
        cout << i << endl; //循环体
        i++; //循环变量迭代
    }
    
}