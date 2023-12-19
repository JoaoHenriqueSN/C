#include <iostream>

int main()
{

	int Array[4][4]
		//Primeiro você declara a linha e posteriormente a coluna 
	{
		{0,0,0,0},
		{1,1,1,1},
		{2,2,2,2},
		{3,3,3,3}
	};

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; i++)
		{
			std::cout << Array[i][j] << " ";
		}
		std::cout << "\n";
	}
	system("PAUSE");
	return 0;
}