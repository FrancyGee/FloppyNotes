#include <iostream>
#include <vector>


int main(int argc, char const *argv[])
{
    //std::vector<type> v1;    
    std::vector<int> v;

    //Inserimento in coda al vettore
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    //Inserimento in testa al vettore
    v.insert(v.begin(), 0);

    //Rimozione in coda di un vettore
    v.pop_back();
    v.pop_back();


    //Capacità di un vettore
    std::cout << v.capacity() << '\n';

    //Dimensione di un vettore
    std::cout << v.size() << '\n';


    // Stampa di un vettore compatta
    std::cout << '[';
    for(auto i : v) {
        std::cout << i << " - ";
    }
    std::cout << ']' << '\n';


    return 0;
}
