#include <iostream>

using namespace std;

int main()
{
	double x[10], pos[10], neg[10];
	int i=0, n;
	
	cin >> n;
	while(n>10 || n<1)
		cin >> n;
	
	while(i<n)
	{
		cin >> x[i];	
		i++;
	}
	i=0;
cout<< endl << "Vetores positivos: " << endl;
	while(i<n)
	{
		if(x[i]>=0)
		{
			pos[i]=x[i];
			cout << "Numero: " << pos[i] << " -> Posicao: " << i << endl;
		}	
		i++;
	}
	i=0;
	cout << endl << "Vetores negativos: " << endl;
	while(i<n)
	{
		if(x[i]<0)
		{
			neg[i]= x[i];
			cout << "Numero : " << neg[i] << " -> Posicao: " << i << endl;
		}
		i++;
	}	

	
	return 0;
}