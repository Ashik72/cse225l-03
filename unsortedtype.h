//
// Created by Ashiqur Rahman on 2/5/17.
//

#ifndef CSE225_LISTSORT_UNSORTEDTYPE_H
#define CSE225_LISTSORT_UNSORTEDTYPE_H

#include "itemType.h"

class UnsortedType {

    private:
        int length;
        ItemType info[MAX_ITEMS];
        int currentPos;

    public:
        UnsortedType();
        void MakeEmpty();
        bool IsFull();
        int LengthIs();
        void ResetList();
        void GetNextItem(ItemType&);
        void InsertItem(ItemType);
        void RetrieveItem(ItemType&, bool&);
        void DeleteItem(ItemType);
        void PrintList();

};
#endif //CSE225_LISTSORT_UNSORTEDTYPE_H
