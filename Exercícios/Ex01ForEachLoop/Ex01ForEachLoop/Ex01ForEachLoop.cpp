#include <iostream>

int main()

{

	int anos[]{ 1998, 2011, 2014, 2017, 2020 };

	for (auto Num : anos)//nesse caso, a variavel decladarada como "Num" vai receber os dados do array
	{ 
		std::cout << Num << "\n";
	}
	return 0;
	system("PAUSE");
}