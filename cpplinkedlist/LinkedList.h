#pragma once

template<typename T>
struct NodeItem
{
	T _data;
	NodeItem* _next;
};

template<typename T>
class LinkedList
{
private:
	NodeItem<T>* _head;
	unsigned int _size;

public:
	LinkedList(void);
	bool insert(T& data);
	void remove(NodeItem<T>* node);

	NodeItem<T>* find_item(T& data);
};