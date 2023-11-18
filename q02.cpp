#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    struct ficha
    {
        char nome[80];
        int cpf, idade;
    };

    ficha dados[200];
    int p=1, i=0, k;
    int pesquisa;
    int c=-1;

    do
    {
        cout << "Nome do participante: ";
        cin.getline(dados[i].nome, 80);
        cout << "CPF do participante: ";
        cin >> dados[i].cpf;
        cout << "Idade do participante: ";
        do
        {
            cin >> dados[i].idade;
        }while(dados[i].idade<10 || dados[i].idade>80);

        cout << "Deseja repetir o processo? (1)Sim ou (2)Nao: ";
            cin >> p;
        i++;

            switch (p)
        {
        case 1:
            p==1;
            break;
        case 2:
            p=p+2;
            break;
        }

        cin.ignore();
    } while (p==1);
    
	cout << "Deseja pesquisar um participante especifico?: ";
	
	cin >> pesquisa;
	
	for(k=0; k<=i; k++)
	{
		if(pesquisa==dados[k].cpf)
		{
			cout << "Participante encontrado!" << endl << endl;
			cout << dados[k].nome << endl;
			cout << dados[k].cpf << endl;
			cout << dados[k].idade << endl;
			c=k;
		}
	}
	if(c=-1)
		cout << "Nenhum participante encontrado!" << endl;

	cout << "Todos os participantes: " << endl;
	cout << "Nome" << "\t \t" << "CPF" << "\t \t" << "Idade" << endl;
	for(k=0;k<i;k++)
	{
		cout << dados[k].nome << "\t \t" << dados[k].cpf << "\t \t" << dados[k].idade << endl;
	}

    return 0;
}
