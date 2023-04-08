#include<iostream>
#include<string>

using namespace std;


struct Item{
    string name;
    float price;

    Item (string n="", float p=0.0): name(n), price(p){
    }

    bool operator== (const Item& rhsItem) const;
};

ostream& operator<<(ostream& out, Item& item);

struct Collection{
    string name;
    int size;
    int MaxSize = 10;
    Item* theCollection; //Array of Items dynamically allocated on Heap,
                         //instead of the (list<Item> theCollection;)

	Collection(string n);
    Collection(const Collection& copied_collection);

    void operator+=(Item& item);

    ~Collection();
};