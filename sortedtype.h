//
// Created by Ashiqur Rahman on 2/5/17.
//

#ifndef CSE225_LISTSORT_SORTEDTYPE_H
#define CSE225_LISTSORT_SORTEDTYPE_H

#include "itemType.h"

class SortedType {

private:
    int length;
    ItemType info[MAX_ITEMS];
    int currentPos;

public:
    SortedType();
    void MakeEmpty();
    bool IsFull();
    int LengthIs();
    void ResetList();
    void GetNextItem(ItemType&, bool&);
    void DeleteItem(ItemType);

};

#endif //CSE225_LISTSORT_SORTEDTYPE_H
