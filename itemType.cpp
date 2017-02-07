//
// Created by Ashiqur Rahman on 2/4/17.
//
#include <iostream>
#include "itemType.h"

using namespace std;

ItemType::ItemType() {

    value = 0;
}


void ItemType::Initialize(int val) {

    value = val;
}

RelationType ItemType::ComparedTo(ItemType i) {

    if (value < i.value)
        return LESS;
    else if (value > i.value)
        return GREATER;
    else
        return EQUAL;

}

void ItemType::Print() {

    cout << value << " ";
}