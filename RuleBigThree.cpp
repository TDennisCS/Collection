#include "collection.h"

int main()
{
    Item  myItem1 = Item ("Vase", 10.30) ;
    Item  myItem2 = Item ("Portrait", 52) ;
    Item  myItem3 = Item ("Gold Ring", 200) ;

    Collection myCollection("Mine");

    myCollection += myItem1;
    myCollection += myItem2;
    myCollection += myItem3;

    Collection yourCollection(myCollection);

    myCollection.theCollection[0].name = "TiffanyLamp";

    cout << myCollection.name <<endl;
    for (int i = 0; i< myCollection.size; i++){
        cout <<  myCollection.theCollection[i] << endl;
    }
    cout << "---------------" << endl;


    cout << yourCollection.name <<endl;
    for (int i = 0; i< yourCollection.size; i++){
        cout <<  yourCollection.theCollection[i] << endl;
    }
    cout << "---------------" << endl;
    
    return 0; 
}