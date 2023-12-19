#include <iostream>
#include <iomanip>
int main()
{

	double Nota[]{4.9, 9.5, 5.6, 2.5, 9.6, 6.4, 7.5, 9.8, 8.7, 10.0};
	int NumNotas = sizeof(Nota) / sizeof(double);
	//Lembando: tamanho do array Notasem bytes dividido pelo tamanho de dados em bytes
	std::cout << "\n Tamanho do vetor Nota: " << sizeof(Nota) << " em Bytes\n";
	std::cout << "\n Tamanho do tipo Doubles: " << sizeof(double) << " em Bytes\n";
	double SomaDasNotas{ 0.0 };
	for (auto Notas : Nota)
	{
		SomaDasNotas += Notas;
	}
	std::cout << "\nA media das notas do aluno foi: " << SomaDasNotas / NumNotas << "\n";
	return 0;
	system("PAUSE");
}