#include <iostream>
using namespace std;

struct Item{
    string name;
    float price;

    Item (string n="", float p=0.0): name(n), price(p){
    }

    bool operator== (const Item& rhsItem) const {
        return this->name == rhsItem.name;
    }
};
ostream& operator<<(ostream& out, Item& item){
	out<< "The " << item.name <<" price is $" << item.price;
    return out;
}

struct Collection{
    string name;
    int size;
    int MaxSize = 10;
    Item* theCollection; //Array of Items dynamically allocated on Heap,
                         //instead of the (list<Item> theCollection;)

	Collection(string n){
	    size = 0;
	    name = n;
        theCollection = new Item [MaxSize]; //Allocate on the Heap
    }

    void operator+=(Item& item){
    	this->theCollection[size]=item;
    	size++;
    }
};


main(){
    Item  myItem1 = Item ("Vase", 10.30) ;
    Item  myItem2 = Item ("Portrait", 52) ;
    Item  myItem3 = Item ("Gold Ring", 200) ;

    Collection myCollection("Mine");

    myCollection += myItem1;
    myCollection += myItem2;
    myCollection += myItem3;

    ///print myCollection
    cout << myCollection.name <<endl;
    for (int i = 0; i< myCollection.size; i++){
        cout <<  myCollection.theCollection[i] << endl;
    }

    cout << "---------------" << endl;
}

