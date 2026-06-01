#include <iostream>
using namespace std;

int main() {
    // 浮点型
    // 单精度浮点型
    // 默认情况下 输出单精度浮点型的值时 会保留6位小数

    float a = 3.14f;
    cout << "a = " << a << endl;
    // 双精度浮点型
    double b = 3.14;
    cout << "b = " << b << endl;

    float a1 = 3e2f;
    cout << "a1 = " << a1 << endl;
    double b1 = 3e2;
    cout << "b1 = " << b1 << endl;      
    
    return 0;
}