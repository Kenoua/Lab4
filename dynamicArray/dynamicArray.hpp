#include "dynamicArray.h"
#include <string>
using namespace std;

template <class T> 
DynamicArray<T>::DynamicArray(const unsigned int _capacite){
	tabElements = new T[_capacite];
	capacite = _capacite;
	if (_capacite < 1){
		throw invalid_argument("Capacité inferieure a 0");
	}

	for (size_t i = 0; i < capacite; i++)
	{
		tabElements[i] = T();
	}
}



template <class T>
int DynamicArray<T>::getCapacite(){
	return capacite;
}

template <class T>
T DynamicArray<T>::getElement(unsigned int _index){
	if (_index < 0 || _index > capacite){
		throw out_of_range("OUT OF RAGE");
	}
	
	return tabElements[_index];
}

template <class T>
void DynamicArray<T>::setElement(unsigned int _index, T _valeur){

	if (_index >= capacite){
		setCapacite(_index + 1);
	}
	tabElements[_index] = _valeur;
}

template <class T>
void DynamicArray<T>::setCapacite(unsigned int _capacite){

	if (_capacite < 1){
		throw invalid_argument("Capacité inferieure");
	}


	T* newTab = new T[_capacite];

	for (size_t i = 0; i < _capacite; i++)
	{
		newTab[i] = T();
	}

	for (size_t i = 0; i < capacite; i++)
	{
		if (i <= _capacite){
			newTab[i] = tabElements[i];
		}
	}

	capacite = _capacite;
	delete tabElements;
	tabElements = newTab;
}


