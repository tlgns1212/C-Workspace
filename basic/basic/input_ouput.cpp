#include "stdafx.h"

void InitTable(int* table);
void ShowTable(int* table);
void UserSelect(int* userTable, int* comTable);

int main() 
{
	// 랜덤 초기화
	srand(time(NULL));
	rand();

	// 테이블 배열과 빙고 변수 선언
	int nUserTable[25];
	int nUserBingo = 0;
	int nComTable[25];
	int nComBingo = 0;

	// 게임 진행 변수 선언
	bool isPlaying = true;

	// 게임 진행
	while (isPlaying) 
	{
		// 게임 플레이
		InitTable(nUserTable);
		InitTable(nComTable);

		while (nUserBingo < 3 && nComBingo < 3)
		{
			system("cls");

			ShowTable(nUserTable);
			cout << endl;
			ShowTable(nComTable);
			UserSelect(nUserTable, nComTable);
		}

		// 게임 종료 선택
		cout << "0. 게임 종료, 1. 새 게임 : ";
		cin >> isPlaying;

	}
}

void InitTable(int* table)
{
	for (int i = 0; i < 25; i++)
	{
		table[i] = i + 1;
	}
	int nSrc;
	int nDest;
	int nTemp;

	for (int i = 0; i < 250; i++)
	{
		nSrc = rand() % 25;
		nDest = rand() % 25;

		nTemp = table[nSrc];
		table[nSrc] = table[nDest];
		table[nDest] = nTemp;
	}
}

void ShowTable(int* table)
{
	cout << "===================================" << endl;
	for (int i = 0; i < 25; i++)
	{
		cout << "|  " << table[i] << "\t|";
		if (i % 5 == 4)
		{
			cout << endl;
			cout << "===================================" << endl;
		}
	}
}

void UserSelect(int* userTable, int* comTable)
{
	int nSelect;

	cout << "선택 (1 ~ 25) : ";
	cin >> nSelect;

	// 테이블 전체를 검사
	for (int i = 0; i < 25; i++)
	{
		if (nSelect == userTable[i])
		{
			// 0 -> 테이블에서 이미 선택 된 숫자를 의미
			userTable[i] = 0;

			// 컴퓨터 테이블도 똑ㄱ같은 숫자를 처리
			for (int j = 0; j < 25; j++)
			{
				if (nSelect == comTable[j])
				{
					comTable[j] = 0;
					break;
				}
			}
			break;
		}
		// 선택한 숫자를 찾지 못한 경우
		if (i == 24)
		{
			cout << "제대로 선택해라!!" << endl;
			Sleep(1000);
		}
	}

	 
}