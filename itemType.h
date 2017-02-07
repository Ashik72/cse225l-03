//
// Created by Ashiqur Rahman on 2/4/17.
//

#ifndef CSE225_LISTSORT_ITEMTYPE_H
#define CSE225_LISTSORT_ITEMTYPE_H

const int MAX_ITEMS = 5;
enum RelationType {LESS, GREATER, EQUAL};

class ItemType {

    private:
        int value;

    public:
        ItemType();
        RelationType ComparedTo(ItemType);
        void Print();
        void Initialize(int);

};

#endif //CSE225_LISTSORT_ITEMTYPE_H
