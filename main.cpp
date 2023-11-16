#include <iostream>
#include "dynamic_array.h"
#include "functions.cpp"

int main() {
    DynamicArray<int> intArray(5);
    DynamicArray<int> emptyIntArray;

    intArray[0] =3;
    intArray[1] = 2;
    intArray[2] = 1;
    intArray[3] = 4;
    intArray[4] = 5;



    std::cout << "Size of array: " << intArray.getSize() << std::endl;
    std::cout << "Max element: " << intArray.getMaxElement() << " Address: " << intArray.getAddressOfMaxElement() << std::endl;
    std::cout << "Min element: " << intArray.getMinElement() << " Address: " << intArray.getAddressOfMinElement() << std::endl;


    intArray.resize(7);
    std::cout << intArray[7] << std::endl;
    std::cout << "New size of array: " << intArray.getSize() << std::endl;

    DynamicArray<double> doubleArray(3);
    doubleArray[0] = 3.17;
    doubleArray[1] = 2.718;
    doubleArray[2] = 1.618;


    std::cout << "Size of array: " << doubleArray.getSize() << std::endl;
    std::cout << "Max element: " << doubleArray.getMaxElement() << " Address: " << doubleArray.getAddressOfMaxElement() << std::endl;
    std::cout << "Min element: " << doubleArray.getMinElement() << " Address: " << doubleArray.getAddressOfMinElement() << std::endl;

    DynamicArray<double> copyArray;
    copyArray = doubleArray;
    std::cout << copyArray[0] << std::endl;
    return 0;
}
