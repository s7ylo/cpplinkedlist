#pragma once

template<typename T>
struct NodeItem
{
	T _data;
	NodeItem* next;
};

template<typename T>
class LinkedList
{
private:
	NodeItem* _head;

public:
	LinkedList();
};