#include <iostream>
#include <vector>

int height(std::vector <int> &vec, int el, int size) {
	if (vec[el] == -1) return size;
	else height(vec, vec[el], ++size);
}

int main()
{
	int num;
	std::cin >> num;
	std::vector <int> vec;
	while (num--) {
		int tmp;
		std::cin >> tmp;
		vec.push_back(tmp);
	}
	int max = 1;
	for (int i = 0; i < vec.size(); i++) {
		int tmp = height(vec, i, 1);
		if (tmp > max) max = tmp;
	}
	std::cout << max;
	return 0;
}
