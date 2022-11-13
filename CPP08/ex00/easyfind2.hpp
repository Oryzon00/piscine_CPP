# include <stdexcept>
# include <algorithm>

template<typename T>
typename T::iterator easyfind(T &container, int const search)
{

	typename T::iterator it = find(container.begin(), container.end(), search);
	if (it != container.end())
		return it;
	throw std::invalid_argument("value is not in the container");
}
