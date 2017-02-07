#include <iostream>
#include "itemType.h"
#include "unsortedtype.h"

using namespace std;

void find(int, int[]);

int main() {


    ItemType i1;
    ItemType i2;
    ItemType i3;
    ItemType i4;
    ItemType i5;

    i1.Initialize(5);
    i2.Initialize(7);
    i3.Initialize(6);
    i4.Initialize(9);

    UnsortedType ut;

    ut.InsertItem(i1);
    ut.InsertItem(i2);
    ut.InsertItem(i3);
    ut.InsertItem(i4);


    ut.PrintList();

    cout << endl;

    cout << ut.LengthIs() << endl;

    ItemType i6;
    i6.Initialize(1);
    ut.InsertItem(i6);

    ut.PrintList();
    cout << endl;

    bool stat_item;

    ItemType i7;
    i7.Initialize(4);

    ut.RetrieveItem(i7, stat_item);

    cout << ( (stat_item) ? "Item is found" : "Item is not found" ) << endl;

    ut.RetrieveItem(i1, stat_item);

    cout << ( (stat_item) ? "Item is found" : "Item is not found" ) << endl;

    ut.RetrieveItem(i4, stat_item);

    cout << ( (stat_item) ? "Item is found" : "Item is not found" ) << endl;

    ItemType i8;
    i8.Initialize(10);

    ut.RetrieveItem(i8, stat_item);

    cout << ( (stat_item) ? "Item is found" : "Item is not found" ) << endl;

    cout << ( (ut.IsFull()) ? "List is full" : "List is not full" ) << endl;

    ut.DeleteItem(i1);

    cout << ( (ut.IsFull()) ? "List is full" : "List is not full" ) << endl;

    ut.DeleteItem(i6);

    ut.PrintList();

    ut.DeleteItem(i3);

    cout << endl;

    ut.PrintList();


    return 0;
}

void find(int n, int arr[]) {


}
