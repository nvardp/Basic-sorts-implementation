#include <iostream>
#include<array>
#include <algorithm>

template <typename Container>
void Selection_sort(Container& arr)
{
	int min_index = 0;
	for (int i = 0; i < arr.size(); i++)
	{
		min_index = i;
		for (int j = i + 1; j < arr.size(); j++)
		{
			if (arr[j] < arr[min_index])
				min_index = j;
		}
		std::swap(arr[min_index], arr[i]);
	}
}

template <typename Container>
void Bubble_sort(Container& arr)
{
	for (int i = 0; i < arr.size() - 1; i++)
	{
		for (int j = arr.size() - 1; j > i; --j)
		{
			if (arr[j] < arr[j - 1])
				std::swap(arr[j], arr[j - 1]);
		}
	}
}

template <typename Container>
void Insertion_sort(Container& arr)
{
	int key;
	for (int i = 1; i < arr.size(); i++)
	{
		key = arr[i];
		int j = i - 1;
		while (j >= 0 && arr[j] > key)
		{
			arr[j + 1] = arr[j];
			--j;
		}
			arr[j + 1] = key;
	}
}

int main()
{
	std::array<int, 7> arr = { 4, 6 ,2, 7 ,9, 3, 1 };
	Insertion_sort<std::array<int, 7> >(arr);
	for (size_t i = 0; i < arr.size(); i++)
	{
		std::cout << arr[i];
	}

}