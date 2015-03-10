#pragma once
#ifndef DYNAMICARRAY_H_
#define DYNAMICARRAY_H_

using namespace std;
template <class T>
class DynamicArray
{

public:

	DynamicArray(const unsigned int _capacite = 100);
	//~DynamicArray();

	void setElement(unsigned int _index, T _valeur);
	T getElement(unsigned int _index);
	void setCapacite(unsigned int _capacite);
	int getCapacite();

	

private:


	DynamicArray& DynamicArray::operator=(const DynamicArray& _rhs);
	DynamicArray(const DynamicArray& _copie);
	T* tabElements;
	unsigned int capacite;


};


#endif //DYNAMICARRAY_H_
#include "dynamicArray.hpp"