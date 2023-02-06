#include <iostream>


bool linearSearch(int arr[], int size, int key);
bool binarySearch(int arr[], int size, int key);


int main(int argc, char const *argv[])
{
    unsigned int size = 10;
    int arr[size];

    for (int i = 0; i < size; i++) {
        arr[i] = i;
    }

    linearSearch(arr, size, 5) ? std::cout << "Found with linear search" << '\n' : std::cout << "Not found with linear search" << '\n';
    binarySearch(arr, size, 5) ? std::cout << "Found with binary search" << '\n' : std::cout << "Not found with binary search" << '\n';



    return 0;
}


bool linearSearch(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return true;
        }
    }
    return false;
}

bool binarySearch(int arr[], int size, int key)
{
    int left = 0;
    int right = size - 1;
    int middle = (left + right) / 2;

    while (left <= right) {
        
        // Verifico se la chiave è nel mezzo (caso migliore)
        if (arr[middle] == key) {
            return true;
        
       // Se la chiave è maggiore del valore centrale, allora la chiave è nella metà destra
        } else if (arr[middle] < key) {
            left = middle + 1;
        
        // Se la chiave è minore del valore centrale, allora la chiave è nella metà sinistra
        } else {
            right = middle - 1;
        }
        
        middle = (left + right) / 2;
    }
    return false;
}