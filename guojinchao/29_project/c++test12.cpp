#include<iostream>
using namespace std;

int main(){

    //1.字符型变量创建方式
    char ch ='B';
    cout <<ch <<endl;
    //2. 字符型变量所占内存大小
    cout <<"char 所占内存为："<<sizeof(ch)<<endl;
    //3. 字符变量常见错误
    // char ch2 ="b" //创建字符变量的时候，要能用单引号
    // char ch2 ='abcdef' //创建字符变量的时候，单引号只能有一个字符
    //4. 字符变量对应ASCII编码

    //a - 97
    //A - 65
    cout<<int(ch) <<endl;
    system("pause");

    return 0;

}