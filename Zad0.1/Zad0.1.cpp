//Zad 0.1 Lambda
//Napisz zwyk�� funkcj� oraz lambd�(przypisz j� do zmiennej) Nast�pnie je wywo�aj :
//a) funkcj� wypisuj�ca �Hello World�
//b) Funkcja dodaj�ca dwie liczby do siebie(i zwracaj�ca j�)

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

