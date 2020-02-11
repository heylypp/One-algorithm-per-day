// Solution.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
using namespace std;

int getThePair(int *a, int n, int theNum, int &left, int &right) {
	int start = 0, end = n - 1;
	while (start < end) {
		int sum = a[start] + a[end];
		if (sum == theNum) {
			left = a[start];
			right = a[end];
			return 1;
		}
		if (sum < theNum) {
			start++;
		}
		else if (sum > theNum) {
			end--;
		}
	}
	return 0;
}

int main() {
	int a[] = { 1,2,3,4,5,6,7,8 };
	int start = 0, end = 0;
	for (int i = 1; i <= 16; i++) {
		if (getThePair(a, 8, i, start, end)) {
			std::cout << "the sum of " << i << " is +" << start << endl;
		}
		else {
			std::cout << "sorry " << i << " not found" << endl;
		}
	}
	return 0;
}


// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门提示: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
