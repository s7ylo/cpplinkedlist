#include "LinkedList.h"

template<typename T>
LinkedList<T>::LinkedList(void)
{
	this->_head = nullptr;
}

template<typename T>
bool LinkedList<T>::insert(T& data)
{
	NodeItem<T>* node = new NodeItem<T>;

	if (node != nullptr)
	{
		node->_data = data;
		node->_next = nullptr;
	}
	else
	{
		return false;
	}

	if (this->_head == nullptr)
	{
		this->_head = node;
	}
	else
	{
		NodeItem<T>* temp = this->_head;

		while (temp->_next != nullptr)
		{
			temp = temp->_next;
		}

		temp->_next = node;
	}

	return true;
}