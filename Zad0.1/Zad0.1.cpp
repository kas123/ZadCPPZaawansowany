//Zad 0.1 Lambda
//Napisz zwyk³¹ funkcj¹ oraz lambdê(przypisz j¹ do zmiennej) Nastêpnie je wywo³aj :
//a) funkcj¹ wypisuj¹ca “Hello World”
//b) Funkcja dodaj¹ca dwie liczby do siebie(i zwracaj¹ca j¹)

#include <iostream>

void printHello()
{
    std::cout << "Hello World!" << std::endl;
}

int main()
{
    printHello();

    auto hello = []() {std::cout << "Hello World!" << std::endl; };
    hello();


    auto addTwo = [](int x, int z)
    {
        return x + z; 
    };

    int result = addTwo(1,4); 

    std::cout << result; 
    

}

