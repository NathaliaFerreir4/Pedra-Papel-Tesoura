#include <iostream>
#include <cstdlib>  // Para usar srand() e rand()
#include <ctime>    // Para gerar uma semente aleatória com base no tempo

using namespace std;

int main() {
    srand(static_cast<unsigned int>(time(0)));

    string opcoes[3] = {"Pedra", "Papel", "Tesoura"};

    cout << "Escolha uma opcao:\n";
    cout << "0: Pedra\n";
    cout << "1: Papel\n";
    cout << "2: Tesoura\n";
    cout << "Sua escolha: ";

    int escolhaJogador;
    cin >> escolhaJogador;

    if (escolhaJogador < 0 || escolhaJogador > 2) {
        cout << "Escolha invalida. Tente novamente.\n";
        return 1;
    }

    int escolhaComputador = rand() % 3;

    cout << "Voce escolheu: " << opcoes[escolhaJogador] << "\n";
    cout << "O computador escolheu: " << opcoes[escolhaComputador] << "\n";

 
    if (escolhaJogador == escolhaComputador) {
        cout << "Empate!\n";
    } else if ((escolhaJogador == 0 && escolhaComputador == 2) ||  // Pedra vence Tesoura
               (escolhaJogador == 1 && escolhaComputador == 0) ||  // Papel vence Pedra
               (escolhaJogador == 2 && escolhaComputador == 1)) {  // Tesoura vence Papel
        cout << "Voce ganhou!\n";
    } else {
        cout << "Voce perdeu!\n";
    }

    return 0;
}
