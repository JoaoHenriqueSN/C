#include <iostream>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "portuguese");
	int NumElementos;
	int min, max;
	int Array[20];

	std::cout << "\nDigite o numero de elemtnos desejados: ";
	std::cin >> NumElementos;

	for (int i = 0; i < NumElementos; i++)
	{
		std::cout << "Digite o Elemento " << (i + 1) << ": " << "\n";
		std::cin >> Array[i];
		system("CLS");
	}

	min = Array[0];
	max = Array[0];

	for (int i = 0; i < NumElementos; i++)
	{
		if (Array[i] > max)
			max = Array[i];
		else if (Array[i] < min)
			min = Array[i];
	}

	std::cout << "\nQual foi o valor máximo? \nR=" << max;

	return 0;
	system("PAUSE");
}