#include <iostream>
#include <vector>

void lenght(std::vector <int>& vec, std::vector <int>& depth, int el) {
	if (vec[el] == -1) depth[el] = 1;
	else if (depth[vec[el]] != -1) depth[el] = depth[vec[el]] + 1;
	else {
		lenght(vec, depth, vec[el]);
		depth[el] = depth[vec[el]] + 1;
	}
}

int main()
{
	int num;
	std::cin >> num;
	std::vector <int> vec;
	std::vector <int> depth;
	while (num--) {
		int tmp;
		std::cin >> tmp;
		vec.push_back(tmp);
		depth.push_back(-1);
	}
	int max = 1;
	for (int i = 0; i < vec.size(); i++) {
		if (depth[i] == -1) lenght(vec, depth, i);
		if (depth[i] > max) max = depth[i];
	}
	std::cout << max;
	return 0;
}
