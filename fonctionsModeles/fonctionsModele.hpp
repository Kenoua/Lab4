// Exemple #1 Trouver la plus grande valeur dans un tableau
template<typename TYPE>
TYPE TrouverMax(const TYPE _tabElements[], const int _nombreElements)
{
	TYPE max = _tabElements[0];
	for (size_t i = 1; i < _nombreElements; i++)
	{
		if (max < _tabElements[i])
		{
			max = _tabElements[i];
		}
	}

	return max;
}

template <typename TYPE>
TYPE CalculerSomme(const TYPE _tabElements[], const int _nombreElements)
{
	TYPE somme = _tabElements[0];
	for (size_t i = 1; i < _nombreElements; i++)
	{
		somme += _tabElements[i];
	}
	return somme;
}

template <typename TYPE>
unsigned int CompterElement(const TYPE _element, const TYPE _tabElements[], const int _nombreElements)
{
	unsigned int nombreRepetitions = 0;
	for (size_t i = 0; i < _nombreElements; i++)
	{
		if (_element == _tabElements[i])
		{
			nombreRepetitions++;
		}
	}
	return nombreRepetitions;
}