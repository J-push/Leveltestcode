// 문제풀이(시험).cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

using namespace std;

// 피보나치
int Pibonacci(int a)
{	
	if (a == 1)
	{
		return 1;
	}
	else if (a == 2)
	{
		return 1;
	}
	else
	{
		//세번째 수부턴
		return Pibonacci(a - 1) + Pibonacci(a - 2);
	}
}

// 하노이탑(구글링)
void Hanoi(int n, int from, int by, int to) // 원판 개수, 출발지, 경유지, 목적지
{
	if (n == 1)
	{
		cout << from << " " << to << endl;
	}
	else
	{
		Hanoi(n - 1, from, to, by);
		cout << from << " " << to << endl;
		Hanoi(n - 1, by, from, to);
	}
}

int main()
{
	int num = 0;
	cin >> num;
	for (int i = 1; i <= num; i++)
	{
		cout << Pibonacci(i) << " ";
	}

	cout << endl;

	int n;
	cin >> n;
	int k = pow(2, n) - 1;
	cout << k << endl;
	Hanoi(n, 1, 2, 3);
	return 0;
}


