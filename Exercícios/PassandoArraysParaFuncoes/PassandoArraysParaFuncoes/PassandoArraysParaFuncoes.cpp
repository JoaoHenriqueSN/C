#include <iostream>
#include <array>

void MostrarVetor(int Array[], int TamVetor);

int main()

{
	int Vetor[]{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	/*sizeof devolve o n�mero em Bytes de uma vari�vel ou tipo
	logo sizeof(Vetor) vai devolver o numero de elementos do vetor
	multiplicado pelo tamanho do seu tipo, pois s�o gastos 4bytes 
	por int neste vetor e como s�o 10 elementos o vetor ter� tamanho
	 de 40 bytes*/

	int TamanhoVetor = std::size(Vetor);
	//A partir do C++ 17 vc pode usar std::size
	std::cout << "\nTamanho vetor: " << TamanhoVetor;
	/*std::cout << "\nTamanho de um float: " << sizeof(float);
	std::cout << "\nTamanho de um int: " << sizeof(int);*/

	MostrarVetor(Vetor, TamanhoVetor);

	system("PAUSE");
	return 0;
}

void MostrarVetor(int Array[], int TamVetor)
{
	for (int i = 0; i < TamVetor; i++)
	{
		std::cout << "- " << Array[i] << "- ";
	}
}
