
#include<iostream>
using namespace std;

int main()
{
    //1、标识符不可以是关键字
    //2、标识符是由字母、数字、下划线构成
    //3、标识符第一个字符只能是字母或下划线
    //4、标识符是区分大小写的

    
    //1、标识符不可以是关键字
    // int  int =10

    //2、标识符是由字母、数字、下划线构成
    int abc =100;
    int _abc = 200;
    int abc123 = 300;


    //3、标识符第一个字符只能是字母或下划线
    //int 123abc = 30

    //4、标识符是区分大小写的
    int AAA = 100;
    cout << abc << endl;
    cout << _abc << endl;
    cout << abc123 << endl;
    cout << AAA << endl;


    system ("pause");
    return 0;
}