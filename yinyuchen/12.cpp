#include <iostream>
using namespace std;

int main(){

    system("chcp 65001");
    //转义字符

    // 换行 \n
    cout << "hello world\n " << endl; // endl 代表换行
    // 反斜杠  
    cout << "hello world\\ " << endl;

    // 水平 \t  作用是让输出的内容对齐
    cout << "hello world\t aaaaa" << endl;
    cout << "hello world\t aaa" << endl;
    cout << "hello world\t aaaaaaaaa" << endl;

    system("pause");
    return 0;

}