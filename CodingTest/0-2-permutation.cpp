// 순서와 상관 O 뽑는다면 -> 순열
// 순서와 상관 X 뽑는다면 -> 조합
//
// 문제에서 순서를 재배치하여 ~ 혹은 ~~한 순서의 경우 max 값을 ~~ 이런식으로 나오면 순열이다.
// 순열은 next_permutation을 활용하여 구현할 수 있다

// #include <iostream>
// #include <algorithm>
// using namespace std;
//
// int main() {
//	int a[] = { 1, 2, 3 };
//	do {
//		for (int i : a) cout << i << " ";
//		cout << '\n';
//	} while (next_permutation(&a[0], &a[0] + 3));
// }

// #include <iostream>
// #include <algorithm>
// using namespace std;
//
// int main() {
//	int a[] = { 1, 2, 3 };
//	do {
//		for (int i : a) cout << i << " ";
//		cout << '\n';
//	} while (next_permutation(a, a+3));
// }

// #include <iostream>
// #include <algorithm>
// #include <vector>
// using namespace std;

// int main()
// {
// 	vector<int> a = {1, 2, 3};
// 	sort(a.begin(), a.end());
// 	do
// 	{
// 		for (int i : a)
// 			cout << i << " ";
// 		cout << '\n';
// 	} while (next_permutation(a.begin(), a.end()));
// }

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	vector<int> a = {2, 1, 3, 100, 200};
	sort(a.begin(), a.end());
	do
	{
		for (int i = 0; i < 2; i++)
		{
			cout << a[i] << " ";
		}
		cout << '\n';
	} while (next_permutation(a.begin(), a.end()));
}