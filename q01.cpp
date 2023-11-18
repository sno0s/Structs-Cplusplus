#include <iostream>
using namespace std;
int main()
{
    struct animal
    {
        char nome[50], raca[30];
        int idade;
    };
    int i, n;
    animal dados[100];
    cout << endl
         << "Entre com o número de animais: ";
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cout << endl
             << "Nome do animal (" << i + 1 << "): ";
        cin.ignore();
        cin.getline(dados[i].nome, 50);
        cout << "Raca do animal (" << i + 1 << "): ";
        cin.getline(dados[i].raca, 30);
        cout << "Idade do animal (" << i + 1 << "): ";
        cin >> dados[i].idade;
    }
    cout << endl << "Nome" << "\t \t" << "Raca" << "\t \t" << "Idade" << "\t \t" << endl;
    for (i = 0; i < n; i++)
        cout << dados[i].nome << "\t \t" << dados[i].raca << "\t \t" << dados[i].idade << endl;
    return 0;
}