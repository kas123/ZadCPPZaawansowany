// Wygeneruj 100000 losowych liczb z przdzia³u -100000 100000 
// Zapisz do pliku a nastepnie wczytaj z pliku do vectora
// Wypisz 100 pierwszych wczytanych liczb 

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <random>

int main()
{
	std::random_device r; 
	std::default_random_engine defEngine(r());
	std::uniform_int_distribution<int> intDistro(-100000, 100000);

	std::string fileName("C:\\Users\\hello\\source\\SDA\\Obiektowosc\\ZadCPPZaawansowany\\ZadPliki\\LiczbyLosowe.txt");
	std::ofstream fileToWrite(fileName, std::ios::out | std::ios::trunc);

	if (fileToWrite.is_open())
	{
		for (int i = 0; i < 100000; ++i)
		{
			if (fileToWrite.good())
			{
				fileToWrite << intDistro(defEngine) << "\n";
			}
		}
	}

	std::vector<int> num;
	std::ifstream fileToOpen(fileName); 
	
	while (fileToOpen.good() && !fileToOpen.eof()) 
	{
		int temp;
		fileToOpen >> temp; 
		num.push_back(temp);
	}
	fileToOpen.close();

	std::for_each(num.begin(), (num.begin()+100), [](const int i) { std::cout << i << std::endl; });

}

