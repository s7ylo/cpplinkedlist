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

public:
	LinkedList(void);
	bool insert(T& data);
	void insert(NodeItem<T>& node);
};