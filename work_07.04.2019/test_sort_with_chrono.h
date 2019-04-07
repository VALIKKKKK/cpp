#ifndef TEST_SORT_WITH_CHRONO_H_INCLUDED
#define TEST_SORT_WITH_CHRONO_H_INCLUDED


template<class Iter>
void comb_sort(Iter first, Iter last)
{
    double cof = 1.2473309;
    int size = last - first;
    int step = size - 1;
    while (step >= 1)
		{
			for (auto i = first; (i + step) < last; ++i)
			{
				if (*i > *(i + step))
				{
					std::iter_swap(i, i + step);
				}
			}
			step /= cof;
		}
}

template<class Iter>
void bubble_sort(Iter first, Iter last)
{
    std::size_t size = std::distance(first, last);
    for(std::size_t i = 0; i != size; ++i)
    {
        for(auto j = first; j != last - i - 1; ++j)
        {
            if(*j > *(j + 1))
            std::iter_swap(j, j + 1);
        }
    }
}

#endif // TEST_SORT_WITH_CHRONO_H_INCLUDED
