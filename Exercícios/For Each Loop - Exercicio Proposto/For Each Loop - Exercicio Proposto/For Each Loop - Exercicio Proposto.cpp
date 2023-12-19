#include <iostream>
#include <iomanip>
int main()

{
	float velocidade[]{70.9,89.5,65.6,102.5,123.6,63.4,74.5,99.5,68.7};
	float somadeveolcidade{ 0.0 };
	int tamarray{ 0 };

	for (auto valores : velocidade)
	{
		somadeveolcidade += valores;
		tamarray++;
	};

	std::cout << "Media da velocidade: "<< std::setprecision (4) << somadeveolcidade / tamarray << "km/h \n";

	return 0;
	system("PAUSE");
}