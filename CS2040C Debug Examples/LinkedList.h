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

	void insertHead(T);
	void print() const;
};

template <class T>
void LinkedList<T>::insertHead(T item) {
	ListNode<T>* n = new ListNode<T>(item, _head);
	_head = n;
}

template <class T>
void LinkedList<T>::print() const {
	cout << "List: ";
	for (ListNode<T>* n = _head; n != NULL; n = n->_next) {
		cout << n->_item << ", ";
	}
	cout << endl;
}

}  // namespace cs2040c

#endif  // __LINKED_LIST_H__