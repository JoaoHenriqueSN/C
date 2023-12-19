#include <iostream>

void TrocaNumeros(int* Num1, int* Num2);

int main()

{
	setlocale(LC_ALL, "portuguese");
	int Numero1, Numero2;
	std::cout << "\nDigite o primeiro número: ";
	std::cin >> Numero1;
	std::cout << "\nDigite o segundo número: ";
	std::cin >> Numero2;
	std::cout << "\nValores antes da troca:\n ";
	std::cout << "Endereço de memória de número 1: " << &Numero1 << "\n";
	std::cout << "Endereço de memória de número 2: " << &Numero2 << "\n";
	TrocaNumeros(&Numero1, &Numero2);
	std::cout << "\nValores depois da troca:\n ";
	std::cout << "Primeiro número:\n " << Numero1 << "\n";
	std::cout << "Segundo número:\n " << Numero2 << "\n";

	system("PAUSE");
	return 0;

}

void TrocaNumeros(int* Num1, int* Num2)
{
	std::cout << "\nEndereço de memória de Num1 da função: " << &Num1 << "\n";
	std::cout << "\nEndereço de memória de Num2 da função : " << &Num2 << "\n";
	std::cout << "\nEndereço de memória contido dentro de Num1: " << Num1 << "\n";
	std::cout << "\nEndereço de memória contido dentro de Num2: " << Num2 << "\n";
	int Temp{ *Num1 };
	*Num1 = *Num2;
	*Num2 = Temp;
}
