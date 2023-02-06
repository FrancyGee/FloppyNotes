#include <iostream>
#include <string>

#define TABLE_SIZE 10

typedef struct {
    std::string name;
}person;
person *hashTable[TABLE_SIZE];


unsigned int hash(std::string key);
void init_hash_table();
void print_hash_table();
void delete_hash_table();
bool insert_hash_table(person *p);
person *search_hash_table(std::string key);
person *remove_hash_table(std::string key);


int main(int argc, char const *argv[])
{
    // Init hash table
    init_hash_table();
    
    person jacob = {.name = "Jacob"};
    person mark = {.name = "Mark"};
    person katie = {.name = "Katie"};
    
    // Insert persons in hash table
    insert_hash_table(&jacob);
    insert_hash_table(&mark);
    insert_hash_table(&katie);
    
    // Print hash table
    print_hash_table();
    

    // Search Mike in hash table
    person *p1 = search_hash_table("Mike");
    if(p1 != NULL) {
        std::cout << "Search: " << p1->name << '\n';
    } else {
        std::cout << "Search: NULL" << '\n';
    }

    // Remove Mark from hash table
    person *p2 = remove_hash_table("mark");
    if(p2 != NULL) {
        std::cout << "Remove: " << p2->name << '\n';
    } else {
        std::cout << "Remove: NULL" << '\n';
    }


    return 0;
}


unsigned int hash(std::string key)
{
    unsigned int lenght = key.length();
    unsigned int hash = 0;

    for(size_t i = 0; i < lenght; i++) {
        hash += key[i];
        hash = (key[i] * hash) % TABLE_SIZE;
    }

    return hash;
}

void init_hash_table()
{
    for(size_t i = 0; i < TABLE_SIZE; i++) {
        hashTable[i] = NULL;
    }
}


void print_hash_table()
{
    for(size_t i = 0; i < TABLE_SIZE; i++) {
        if(hashTable[i] != NULL) {
            std::cout << "\t" << i << "\t" << hashTable[i]->name << '\n';
        } else {
            std::cout << "\t" << i << "\t---" << '\n';
        }
    }
}


bool insert_hash_table(person *p)
{
    if(p == NULL) { 
        return false;
    }
    
    //unsigned int index = 1;
    unsigned int index = hash(p->name);
    
    // Collisione
    if(hashTable[index] != NULL) {
        std::cout << "Collisione: " << p->name << " con " << hashTable[index]->name << '\n';
        return false;
    }

    hashTable[index] = p;
    return true;
}


person *search_hash_table(std::string key)
{
    unsigned int index = hash(key);
    
    // La chiave è stata trovata
    if(hashTable[index] != NULL && hashTable[index]->name.compare(key) == 0) {
        return hashTable[index];
    }

    return NULL;
}


person *remove_hash_table(std::string key) 
{
    unsigned int index = hash(key);
    
    // La chiave è stata trovata
    if(hashTable[index] != NULL && hashTable[index]->name.compare(key) == 0) {
        person *tmp = hashTable[index];
        hashTable[index] = NULL;
        return tmp;
    }

    return NULL;
}


void delete_hash_table()
{
    for(size_t i = 0; i < TABLE_SIZE; i++) {
        if(hashTable[i] != NULL) {
            delete hashTable[i];
        }
    }
}
