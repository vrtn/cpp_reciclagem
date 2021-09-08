#include <iostream>

using namespace std;

int main(){

    int num = 1;

    if( (num>=3 && num <= 6) || (num>=9 && num <= 15) || (num>=15 && num <= 20) ){
        cout << "\n\nValor aceito!\n";
    } else {
        cout << "valor NAO aceito...";
    }

    return 0;
}
