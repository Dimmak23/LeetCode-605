#ifndef CUSTOM_VECTOR_HPP
#define CUSTOM_VECTOR_HPP

#include <vector>

/*
605. Can Place Flowers

You have a long flowerbed in which some of the plots are planted, and some are not.
However, flowers cannot be planted in adjacent plots.

Given an integer array flowerbed containing 0's and 1's, where 0 means empty
and 1 means not empty, and an integer n, return if n new flowers can be planted
in the flowerbed without violating the no-adjacent-flowers rule.

Example 1:

Input: flowerbed = [1,0,0,0,1], n = 1
Output: true

Example 2:

Input: flowerbed = [1,0,0,0,1], n = 2
Output: false

Constraints:

1 <= flowerbed.length <= 2 * 104
flowerbed[i] is 0 or 1.
There are no two adjacent flowers in flowerbed.
0 <= n <= flowerbed.length

*/

class Solution
{
	public:
		static inline int pullCount{};
		bool canPlaceFlowers(std::vector<int>& source, const int& count);
};

inline bool Solution::canPlaceFlowers(std::vector<int>& source, const int& count)
{
	// std::cout << "test #" << pullCount++ << ": original vector: ";
	// for(auto& item: source)	std::cout << item << ' ';
	// std::cout << '\n';
	
	if(count == 0) return true;
	
	if (source.size() == 1)
	{
		if ( (count == 1) && (source.at(0) == 0) ) return true;
		else return false;
	}

	int placed{};
	auto place = [&placed](int& cell){ cell = 1; placed++; };

	for(int index{0}; index < source.size(); index++)
	{
		if( (index == 0) && (source.at(0) == 0) && (source.at(index+1) == 0) )
		{
			place(source.at(index));
		}
		else if( (index != 0) && (source.at(index-1) == 0) && (source.at(index) == 0) && (index != (source.size()-1)) && (source.at(index+1) == 0) )
		{
			place(source.at(index));
		}
		else if( (index != 0) && (index == (source.size()-1)) && (source.at(index) == 0) && (source.at(index-1) == 0) )
		{
			place(source.at(index));
		}
		if(placed == count) return true;
	}

	// std::cout << "resulted vector: ";
	// for(auto& item: source)	std::cout << item << ' ';
	// std::cout << '\n';

	// if (placed < count) return false;
	// else return true;
	return false;
}

#endif /*  */