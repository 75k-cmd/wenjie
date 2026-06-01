#include <iostream>
using namespace std;
int main() {
    
    
    system("chcp 65001");
    //1、整形
    int a = 10;
    cout <<"请输入一个整数: " << endl;
    cin >> a;
    cout << "a = " << a << endl;
    //2、浮点型
    float f1 = 3.14f; //单精度浮点数
    cout  << "请输入一个单精度浮点数: " << endl;
    cin >> f1;
    cout << "f1 = " << f1 << endl;


    //4、布尔型
    bool flag = true;
    cout << "请输入一个布尔值(0或1): " << endl;
    cin >> flag;
    cout << "flag = " << flag << endl;

    //5、字符型
    char ch = 'A';
    cout << "请输入一个字符: " << endl;
    cin >> ch;
    cout << "ch = " << ch << endl;
   

    system("pause");
    return 0;
}