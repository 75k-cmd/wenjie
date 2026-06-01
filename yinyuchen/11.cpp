#include   <iostream>
using namespace std;

int main(){

    system("chcp 65001");
    // 1、字符型变量创建方式
    char ch = 'a';
    cout << "ch = " << ch << endl;

    // 2、字符型变量占用内存空间
    cout << "char 占用的内存空间 : " << sizeof(char) << "字节" << endl;

    // 3、字符型变量常见错误
    //char ch1 = "b"; // 错误，只能用单引号
    //cout << "ch1 = " << ch1 << endl;
    // 4、字符型变量对应的ASCLL码表
        char ch2 = 'a'; 
        cout << "ch2 = " << ch2 << endl;
        cout << "ch2对应的ASCLL码表值 : " << (int)ch2 << endl;


        char ch3 = 'A';
        cout << "ch3 = " << ch3 << endl;
        cout << "ch3对应的ASCLL码表值 : " << (int)ch3 << endl;
    


    system("pause");
    return 0;

}