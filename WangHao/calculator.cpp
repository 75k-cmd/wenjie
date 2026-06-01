#include <iostream>
using namespace std;

int main() {
    double a, b;
    
    cout << "请输入第一个数字: ";
    cin >> a;
    
    cout << "请输入第二个数字: ";
    cin >> b;
    
    cout << "\n===== 计算结果 =====" << endl;
    cout << a << " + " << b << " = " << a + b << endl;
    cout << a << " - " << b << " = " << a - b << endl;
    cout << a << " * " << b << " = " << a * b << endl;
    
    if (b != 0) {
        cout << a << " / " << b << " = " << a / b << endl;
    } else {
        cout << "除数不能为0！" << endl;
    }
    
    return 0;
}
