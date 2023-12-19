#include <iostream>
#include <array>


void MostrarVetor(int Array[], int tamVetor);
void AlterarVetor(int Array[], int tamVetor);

int main()
{

	int Vetor[]{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int TamanhoVetor = std::size(Vetor);
	std::cout << "\nTamano do vetor: " << TamanhoVetor;
	
	std::cout << "\nVetor ORIGINAL: ";
	MostrarVetor(Vetor, TamanhoVetor);
	AlterarVetor(Vetor, TamanhoVetor);
	std::cout << "\nVetor ALTERADO?: ";
	MostrarVetor(Vetor, TamanhoVetor);

	//O NOME DE UM VETOR EM C E C++ É O MESMO QUE &VETOR[0]
	//Ou seja, se vc escrever o nome de um vetor sem os colchetes
	//vc estará escrevendo o endereço de memória do primeiro element do vetor.

	return 0;
	system("PAUSE");
}

//então int Array[] indica que isso na realidade é um ponteiro
//podemos inclusive substitir por int *Ptr_Array
void MostrarVetor(int Array[], int tamVetor)
{
	for (int i = 0; i < tamVetor; i++)
	 
	{
		std::cout << "- " << Array[i] << " -";
	}
	std::cout << "\n\n";
}

void AlterarVetor(int Array[], int tamVetor)
{
	for (int i = 0; i < tamVetor; i++)
	{
		Array[i] = Array[i] * 2;
	}
}
