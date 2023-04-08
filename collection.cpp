#include"collection.h"

bool Item::operator== (const Item& rhsItem) const
{
    return this->name == rhsItem.name;
}

ostream& operator<<(ostream& out, Item& item)
{
	out<< "The " << item.name <<" price is $" << item.price;
    return out;
} 

Collection::Collection(string n)
{
	size = 0;
	name = n;
    theCollection = new Item [MaxSize]; //Allocate on the Heap
}

Collection::Collection(const Collection& copied_collection)
{
	size = copied_collection.size;
	name = copied_collection.name;
    theCollection = copied_collection.theCollection; //Allocate on the Heap
}

void Collection::operator+=(Item& item)
{
    	this->theCollection[size]=item;
    	size++;
}

Collection::~Collection()
{
    delete theCollection;
}