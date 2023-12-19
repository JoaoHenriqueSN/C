#include <iostream>

class Casa 
{
public:
	int NumQuartos{4};
	float Tamanho{90.0f};
	bool TemSuite{true};
	void MostrarTamanho();
	int ObtenhaNumeroDeQuartos();
	bool bTemSuite();
	void SetNumQuartos(int Num);
};

int main()
{
	Casa CasaDePraia;
	CasaDePraia.MostrarTamanho();
	std::cout << "\n Num Quartos" << CasaDePraia.ObtenhaNumeroDeQuartos();
	std::cout << "\n Tem Suite: " << CasaDePraia.bTemSuite() ? std::cout << " Sim": std::cout << " Não" << "\n";
	CasaDePraia.SetNumQuartos(7);

	return 0;
}

void Casa::MostrarTamanho()
{
	std::cout << "\nTamnho: " << Tamanho;
}

int Casa::ObtenhaNumeroDeQuartos()
{
	return NumQuartos;
}

bool Casa::bTemSuite()
{
	return TemSuite;
}

void Casa::SetNumQuartos(int Num)
{
	if ((Num <= 6) && (Num >= 0))
	{
		NumQuartos = Num;
	}
	else
	{
		std::cout << "\nNumero de quartos invalidos";
	}
}
