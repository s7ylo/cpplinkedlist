#include "LinkedList.h"

template<typename T>
LinkedList<T>::LinkedList(void)
{
	this->_head = nullptr;
	this->_size = 0;
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

	this->_size++;

	return true;
}

template<typename T>
void LinkedList<T>::remove(NodeItem<T>* node)
{
	NodeItem<T>* temp = this->_head;
	
	while (temp->_next != node)
	{
		temp = temp->_next;
	}

	temp->_next = node->_next;

	this->_size--;

	delete node;
}

template<typename T>
NodeItem<T>* LinkedList<T>::find_item(T& data)
{
	NodeItem<T>* temp = this->_head;

	while (temp)
	{
		if (temp->_data == data)
		{
			break;
		}

		temp = temp->_next;
	}

	return temp;
}