#include <iostream>
using namespace std;

int main() {
    // 1、c风格字符串
    //注意事项 char 字符串 []

    char str1[] = "hello world";
    system("chcp 65001");
    cout << "c风格字符串: " << str1 << endl;

    string str2 = "hello world";
    cout << "c++风格字符串: " << str2 << endl;
    

    

    system("pause");
    return 0;
}
