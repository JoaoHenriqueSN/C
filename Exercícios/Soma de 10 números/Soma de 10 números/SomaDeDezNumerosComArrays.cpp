#include <iostream>

int main()

//Soma de dez números 
{

	int Numeros[10]{0};
	int Soma{ 0 };

	for (int i = 0;i < 10; i++)
	{
		std::cout << "\nDiga o numero " << (i + 1) << ": " << "\n";
		std::cin >> Numeros[i];
		Soma += Numeros[i];
		system("CLS");
	}

	std::cout << "\nA soma foi: " << Soma << "\n";

	return 0;
	system("PAUSE");

}