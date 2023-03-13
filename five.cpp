#include <iostream>

const int ARRAY_SIZE = 10;

void assign(int array[]) 
{
    for (int i = 0; i < ARRAY_SIZE; i++) 
    {
        array[i] = ARRAY_SIZE - 1 - i;
    }
}

void print(int array[]) {
    std::cout << "Number of elements: " << ARRAY_SIZE << std::endl;
    std::cout << "----------------------------------------------------------------------------------------------------------------------------------" << std::endl;
    for (int i = 0; i < ARRAY_SIZE; i++) {
        std::cout << array[i] << std::endl;
    }
    std::cout << "----------------------------------------------------------------------------------------------------------------------------------" << std::endl;
}

int main() {
    int myArray[ARRAY_SIZE]; // Deklarera arrayen
    assign(myArray); // Fyll arrayen med talen i fallande ordning
    print(myArray); // Skriver ut arrayen
    return 0;
}
