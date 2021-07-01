
#include "SortedList.h"


template<class T>
SortedList<T>::SortedList() {
    head = nullptr;
    currentPos = nullptr;
}

template<class T>
SortedList<T>::~SortedList() {



}


template<class T>
void SortedList<T>::MakeEmpty() {
    NodeT* tmp = head;

    while(head != nullptr) {
        tmp = head;
        head = head->next;
        delete tmp;
    }

    length = 0;
}

template<class T>
bool SortedList<T>::IsFull() const {
    try {
        NodeT* tmp = new NodeT;
    }
    catch (std::bad_alloc error) {
        return true;
    }
    return false;
}

template<class T>
int SortedList<T>::GetLength() const {
    return length;
}

template<class T>
bool SortedList<T>::Contains(T someItem) {

    NodeT* curr = head;
    while(curr != nullptr) {
        if (curr->info == someItem) {
            return true;
        }
        if (curr->info > someItem) {
            break;
        }
    }
    return false;
}

template<class T>
void SortedList<T>::PutItem(T item) {
    NodeT* curr = head;
    NodeT* prev = nullptr;
    while(curr != nullptr) {
        // find where to insert


    }

}

template<class T>
void SortedList<T>::DeleteItem(T item) {

    NodeT* curr = head;
    NodeT* prev = nullptr;
    while(curr != nullptr) {
        // find item to delete


    }

}

template<class T>
void SortedList<T>::ResetIterator() {
    currentPos = head;
}

template<class T>
int SortedList<T>::GetNextItem() {
    if (currentPos == nullptr) {
        throw "Out of bounds";
    }
    T value = currentPos->info;
    currentPos = currentPos->next;
    return value;
}


