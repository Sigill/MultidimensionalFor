#include "MultidimensionalFor.h"

MultidimensionalFor::MultidimensionalFor(const IndexType &to):
	m_dimension(to.size()),
	m_from(m_dimension, 0),
	m_to(to),
	m_position(m_dimension)
{
	goToBegin();
}

MultidimensionalFor::MultidimensionalFor(const IndexType &from, const IndexType &to):
	m_dimension(to.size()),
	m_from(from),
	m_to(to),
	m_position(m_dimension)
{
	goToBegin();
}

// At the first next(), m_position will be set to m_from.
void MultidimensionalFor::goToBegin()
{
	m_position[0] = m_from[0] - 1;
	for(int i = 1; i < m_dimension; ++i)
		m_position[i] = m_to[i];
}

// There is a next position if at least one end of a dimension has not been reached.
bool MultidimensionalFor::hasNext() const
{
	for(int i = 0; i < m_dimension; ++i)
		if(m_position[i] < m_to[i])
			return true;

	return false;
}

// For each dimension, starting with the last one:
// - If the current position has not reached the end of the dimension, just increment the position for this dimension.
// - If the current position has reached the end of the dimension, reset it to its beginning, and continue the process with the previous dimension.
void MultidimensionalFor::next()
{
	for(int i = m_dimension - 1; i >= 0; --i)
	{
		if(m_position[i] < m_to[i])
		{
			m_position[i] += 1;
			break;
		} else {
			m_position[i] = m_from[i];
		}
	}
}
