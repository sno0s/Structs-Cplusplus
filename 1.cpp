#include <iostream>

using namespace std;

int main()
{
	double x[10], media, s=0;
	int i=0, n;
	
	cout << "Entre com a quantidade de numeros: ";
	cin >> n;
		while(n>10 || n<1)
		{
			cout << "Numero invalido" << endl;
			cin >> n;
		}
		cout << "Entre com os numeros: ";
	
	while(i<n)
	{
		cin >> x[i];
		s+=x[i];
		i++;
	}

	media = s/i;
	i=0;
	
	cout << endl << "Media: " << media << endl << endl;
	
	cout << "Numeros maiores ou iguais a media: " << endl;
	while(i<n)
	{
		if(x[i]>=media)
			cout << "Numero: " << x[i] << " -> Posicao: " << i << endl;	
        i++;
	}
	i=0;
	cout << endl << "Numeros menores que a media: " << endl;
	while(i<n)
	{
		if(x[i]<media)
			cout << "Numero: " << x[i] << " -> Posicao: " << i << endl;
		i++;
	}
	i=0;
	cout << endl; 

	return 0;
}