#include <iostream>
#include <array>
using namespace std;

// Função de separação das notas por valor
array<int, 6> contaNotas(int saque) {
    array<int, 6> notasSeparadas;
    notasSeparadas[0] = saque / 100;
    notasSeparadas[1] = (saque % 100) / 50;
    notasSeparadas[2] = ((saque % 100) % 50) / 20;
    notasSeparadas[3] = (((saque % 100) % 50) % 20) / 10;
    notasSeparadas[4] = ((((saque % 100) % 50) % 20) % 10) / 5;
    notasSeparadas[5] = (((((saque % 100) % 50) % 20) % 10) % 5) / 2;
    return notasSeparadas;
}

// Fluxo principal do código
int main() {
    // Declara variáveis
    int saque;
    array<int, 6> qtdNotas;

    // Lê valor a ser sacado do Caixa Eletrônico
    cout << "Digite o valor a ser sacado: ";
    cin >> saque;

    // Executa função para separar quantidade de notas por seu valor
    qtdNotas = contaNotas(saque);

    // Simula saída de notas do Caixa Eletrônico
    cout << "Qtd. Notas de 100: " << qtdNotas[0] << "\n";
    cout << "Qtd. Notas de 50: " << qtdNotas[1] << "\n";
    cout << "Qtd. Notas de 20: " << qtdNotas[2] << "\n";
    cout << "Qtd. Notas de 10: " << qtdNotas[3] << "\n";
    cout << "Qtd. Notas de 5: " << qtdNotas[4] << "\n";
    cout << "Qtd. Notas de 2: " << qtdNotas[5] << "\n";

    // Final do main
    return 0;
}
