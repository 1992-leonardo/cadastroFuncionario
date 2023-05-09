#include <iostream>
#include <string>

using namespace std;

struct Funcionario {
    string nome;
    int idade;
    string cargo;
    float salario;
};

int main() {
    Funcionario f;

    cout << "Cadastro de Funcionario" << endl;
    cout << "-----------------------" << endl;

    cout << "Nome: ";
    getline(cin, f.nome);

    cout << "Idade: ";
    cin >> f.idade;

    cin.ignore(); // ignorar o '\n' que ficou no buffer do teclado

    cout << "Cargo: ";
    getline(cin, f.cargo);

    cout << "Salario: ";
    cin >> f.salario;

    cout << endl;

    cout << "Funcionario cadastrado:" << endl;
    cout << "-----------------------" << endl;

    cout << "Nome: " << f.nome << endl;
    cout << "Idade: " << f.idade << endl;
    cout << "Cargo: " << f.cargo << endl;
    cout << "Salario: " << f.salario << endl;

    return 0;
}
