#include "stdafx.h"

void InitTable(int* table);
void ShowTable(int* table);
void UserSelect(int* userTable, int* comTable);

int main() 
{
	// ���� �ʱ�ȭ
	srand(time(NULL));
	rand();

	// ���̺� �迭�� ���� ���� ����
	int nUserTable[25];
	int nUserBingo = 0;
	int nComTable[25];
	int nComBingo = 0;

	// ���� ���� ���� ����
	bool isPlaying = true;

	// ���� ����
	while (isPlaying) 
	{
		// ���� �÷���
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

		// ���� ���� ����
		cout << "0. ���� ����, 1. �� ���� : ";
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

	cout << "���� (1 ~ 25) : ";
	cin >> nSelect;

	// ���̺� ��ü�� �˻�
	for (int i = 0; i < 25; i++)
	{
		if (nSelect == userTable[i])
		{
			// 0 -> ���̺��� �̹� ���� �� ���ڸ� �ǹ�
			userTable[i] = 0;

			// ��ǻ�� ���̺� �Ȥ����� ���ڸ� ó��
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
		// ������ ���ڸ� ã�� ���� ���
		if (i == 24)
		{
			cout << "����� �����ض�!!" << endl;
			Sleep(1000);
		}
	}

	 
}