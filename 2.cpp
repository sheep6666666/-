#include <iostream>
using namespace std;

int main() {
    char a;
    cout << "梁书衡帅不帅？（输入 Y/N)\n";
    cin >> a;
    
    if (a == 'Y' || a == 'y') {
        cout << "你果然不撒谎\n";
    } else {
        cout << "你竟然撒谎，太可恶了\n";
    }
    return 0;
}
