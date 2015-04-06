#ifndef MULTIDIMENSIONALFOR_H
#define MULTIDIMENSIONALFOR_H

#include <vector>

class MultidimensionalFor
{
public:
	typedef int IndexValueType;
	typedef std::vector< IndexValueType > IndexType;

private:
	int m_dimension;
	IndexType m_from, m_to, m_position;

public:
	MultidimensionalFor(const IndexType &to);
	MultidimensionalFor(const IndexType &from, const IndexType &to);

	void goToBegin();
	bool hasNext() const;
	void next();

	inline IndexValueType operator[](const int i) const
	{
		return m_position[i];
	}
};

#endif /* MULTIDIMENSIONALFOR_H */
