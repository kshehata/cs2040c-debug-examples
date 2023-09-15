#ifndef __LINKED_LIST_H__
#define __LINKED_LIST_H__

#include <iostream>

using namespace std;

namespace cs2040c {

namespace {

template <class T>
class ListNode {
public:
	T _item;
	ListNode<T>* _next;

	ListNode(T item, ListNode<T>* next = NULL) : _item(item), _next(next) { }
	~ListNode() { }
};

}  // namespace

template <class T>
class LinkedList {
private:
	ListNode<T>* _head;
	int _size;

public:
	LinkedList() : _head(NULL), _size(0) { }
	~LinkedList(void) { }

	int getSize() { return _size; }

	LinkedList<T>* insertHead(T);
	void print() const;
	LinkedList<T>* remove(T);
};

template <class T>
LinkedList<T>* LinkedList<T>::insertHead(T item) {
	ListNode<T>* n = new ListNode<T>(item, _head);
	_head = _head;
	++_size;
	return this;
}

template <class T>
void LinkedList<T>::print() const {
	cout << "List: ";
	for (ListNode<T>* n = _head; n != NULL; n = n->_next) {
		cout << n->_item << ", ";
	}
	cout << endl;
}

template <class T>
LinkedList<T>* LinkedList<T>::remove(T item) {
	if (_head == NULL) return this;
	for (ListNode<T>* n = _head; n->_next != NULL; n = n->_next) {
		if (n->_next->_item == item) {
			n->_next = n->_next->_next;
			return this;
		}
	}

	return this;
}

}  // namespace cs2040c

#endif  // __LINKED_LIST_H__
