#include <iostream>
#include <string>

int main()
{

	float Notas[5] {0.0f, 1.0f, 2.0f,3.0f,4.0f};
	float Media, Soma{0.0};

	std::string NomeAluno;

	std::cout << "\nDigite o nome do aluno: ";
	std::cin >> NomeAluno;


	for (int i = 0; i <= 4; i++)
	{
		std::cout << "\nDigite a nota" << (i + 1) << ": ";
		std::cin >> Notas[i];
		Soma = Soma + Notas[i];
		system("CLS");
	}

	Media = Soma/ 5;

	std::cout << "\nA media do aluno foi: " << Media << "\n";

	system("PAUSE");
	return 0;
}