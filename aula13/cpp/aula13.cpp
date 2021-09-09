#include <iostream>

using namespace std;

int main(){

    int val;

    cout << "Selecione uma cor:\n";
    cout << "[1,2,3] Verde / [4,5,6] Azul / [7,8,9] Vemelho\n";
    cin >> val;

    switch(val){
        case 1:
        case 2:
        case 3:
            cout << "Cor selecionada [VERDE]\n";
            break;
        case 4:
        case 5:
        case 6:
            cout << "Cor selecionada [AZUL]\n";
            break;
        case 7:
        case 8:
        case 9:
            cout << "Cor selecionada [VERMELHO]\n";
            break;
        default:
            cout << "Valor selecionado invalido...\n\n";
    }

    cout << "\nPrograma finalizado\n";

    return 0;
}
