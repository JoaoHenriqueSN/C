#include <iostream>

int main()

{
	/*Declarado uma vari�vel do tipo Matriz com 5 linhas e 5 colunas
	Como o C++ o indice come�a com zero as linhas e colunas v�o de 0 a 4*/
	int Matriz[5][5];

	//
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (i < j)
			{
				std::cout << " 1 ";
			}
			else if (i == j) 
			{
				std::cout << " 0 ";
			}
			else if (i >j)
			{
				std::cout << "-1 ";
			}
		}//fim for j
		std::cout << "\n";
	}//fim for i

	system("PAUSE");
	return 0;
}