// 재귀함수
// 재귀함수는 정의 단계에서 자신을 재참조하는 함수
// 전달되는 상태인 매개변수가 달라질 뿐 똑같은 일을 하는 함수
// 큰 문제를 작은 부분문제로 나눠서 풀 때 사용합니다.

/*
주의 사항
반드시 기저사례를 써야 한다. (종료조건)
사이클이 있다면 쓰면 안된다. ex) f(a)가 f(b)를 호출한 뒤 f(b)가 다시 f(a)를 호출하는 것
반복문으로 될 거같으면 반복문으로. (함수호출에 대한 코스트)
*/

#include <iostream>
using namespace std;

int n = 5;

int fact(int n)
{
	if (n == 1 || n == 0)
		return 1;
	return n * fact(n - 1);
}

int fibo(int n)
{
	cout << "fibo : " << n << endl;
	if (n == 0 || n == 1)
		return n;
	return fibo(n - 1) + fibo(n - 2);
}

int main()
{
	cout << fact(n) << " " << fibo(n) << endl;
}