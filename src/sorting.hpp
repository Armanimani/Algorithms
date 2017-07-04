#pragma once
namespace alg
{
	auto defaultComparator_ = [](auto lhs, auto rhs) { return lhs < rhs; };

	template<typename RandomAccessIterator, class Comparator = decltype(defaultComparator_)>
	void insertation_sort(RandomAccessIterator first, RandomAccessIterator last, Comparator compare = defaultComparator_)
	{
		if (first == last) return;
		for (auto i = first + 1; i != last; i++)
		{
			auto key = *i;
			auto j = i;
			while (j > first && compare(key, *(j - 1)))
			{
				*(j) = *(j - 1);
				j--;
			}
			*(j) = key;
		}
	}
}