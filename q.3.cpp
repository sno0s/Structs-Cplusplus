#include <iostream>

using namespace std;

int main () 
{
	double a[5], b[5], c[10], d[10];
	int i;
	
	cout << "Entre com os valores do vetor 'A': " << endl;
	for(i=0; i<5; i++)
		cin >> a[i];

	cout << endl << "Entre com os valores do vetor 'B': " << endl;
	for(i=0;i<5;i++)
		cin >> b[i];
	
	//Criando o vetor "c"
	for(i=0;i<5;i++)
		c[i]=a[i];
	
	for(i=0;i<5;i++)
		c[i+5]=b[i];
	
	//Criando o vetor "d"
	i=0;
	while(i<5)
	{
		if(i==0)
		   	d[i]=a[i];
		else
		   	d[i+i]=a[i];
		i++;
	}
	i=1;
	while(i<=5)
	{
		if(i==1)
			d[i]=b[i-1];
		else 
			d[i+i-1]=b[i-1];
		i++;
	}
	
	cout << endl << "Vetor 'c': " << endl;
	for(i=0;i<10;i++)
		cout << "Numero: " << c[i] << " -> Posicao: " << i << endl;
	
	cout << endl << "Vetor 'd': " << endl;
	for(i=0;i<10;i++)
		cout << "Numero: " << d[i] << " -> Posicao: " << i << endl;
	
	return 0;
}