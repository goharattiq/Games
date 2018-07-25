//#include <iostream>
//#include <string>
//#include <sstream>
//#include <cstdlib>
//#include <ctime>
//using namespace std;
//char player1[101] = { 35,48 };                                //Initialization
//char player2[101] = { 38,48 };
//string stand[101] = { " " };
//int i = 1;
//
//
//void Turn();                               //Functions Prototypes
//void Display();
//void Update(int dice,int player);
//void check1(int check);
//void check2(int check);
//
//
//void main()
//{
//	Turn();
//}
//
//
//void Display()
//{
//	for (int j = 0; j < 101; j++)
//	{
//		stand[j] = " ";
//	}
//	for (int j = 0; j < 101; j++)
//	{
//		if (player1[j]==35)
//		{
//			stand[j] += player1[j];
//		}
//		if (player2[j] == 38)
//		{
//			stand[j] += player2[j];
//		}
//	}
//	string sl[101];
//	sl[1] = sl[4] = sl[9] = sl[21] = sl[28] = sl[51] = sl[72] = sl[80] = "LADDER";
//	sl[17] = sl[54] = sl[62] = sl[64] = sl[87] = sl[93] = sl[95] = sl[98] = "SNAKE";
//	system("CLS");
//	cout << "PLAYER 1 [#]\n";
//	cout << "PLAYER 2 [&]\n";
//	for (int j = 1; j < 101; j+=10)
//	{
//		cout << " ________________________________________________________________________________\n";
//		cout << "|" << sl[j] << "\t|" << sl[j+1] << "\t|" << sl[j + 2] << "\t|" << sl[j + 3] << "\t|" << sl[j + 4] << "\t|" << sl[j + 5] << "\t|" << sl[j + 6] << "\t|" << sl[j + 7] << "\t|" << sl[j + 8] << "\t|" << sl[j + 9] << "\t |\n";
//		cout << "|" <<  j<< "\t|" << j+1 << "\t|" << j+2 << "\t|" << j + 3 << "\t|" << j + 4 << "\t|" << j + 5 << "\t|" << j + 6 << "\t|" << j + 7 << "\t|" << j + 8 << "\t|" << j + 9 << "\t |\n";
//		cout << "|" << stand[j] << "\t|" << stand[j + 1] << "\t|" << stand[j + 2] << "\t|" << stand[j + 3] << "\t|" << stand[j + 4] << "\t|" << stand[j + 5] << "\t|" << stand[j + 6] << "\t|" << stand[j + 7] << "\t|" << stand[j + 8] << "\t|" << stand[j + 9] << "\t |\n";
//	}
//	cout << "----------------------------------------------------------------------------------\n";
//}
//
//
//void Turn()
//{
//	Display();
//	if (player1[100] == 35)
//	{
//		cout << "Player 1 WON\n";
//		exit(0);
//	}
//	if (player2[100] == 38)
//	{
//		cout << "Player 2 WON\n";
//		exit(0);
//	}
//	int min = 1;
//	int max = 6;
//	int dice;
//	srand(time(0));
//	dice = rand() % (max-min+1)+min;
//	int player;
//	if (i % 2 == 1)
//	{
//		i++;
//		cout << "Player 1 Turn press [1] \n";
//		cin >> player;
//		Update(dice, player);
//	}
//	if (i % 2 == 0)
//	{
//		i++;
//		cout << "Player 2 Turn press [2] \n";
//		cin >> player;
//		Update(dice, player);
//	}
//}
//
//void Update(int dice,int player)
//{
//	int e;
//	switch (player)
//	{
//	case 1:
//	{
//		for (int j = 0; j <101; j++)
//		{
//			if (player1[j] == 35)
//			{
//				int check = j + dice;
//				if (check>101)
//				{
//					dice = 0;
//				}
//				e = player1[j];
//				player1[j] = player1[check];
//				player1[check] = e;
//				check1(check);
//			}
//		}
//	}
//	case 2:
//	{
//		for (int j = 0; j <101; j++)
//		{
//			if (player2[j] == 38)
//			{
//				int check = j + dice;
//				if (check>101)
//				{
//					dice = 0;
//				}
//				e = player2[j];
//				player2[j] = player2[check];
//				player2[check] = e;
//				check2(check);
//			}
//		}
//	}
//	}
//}
//
//
//void check1(int check)
//{
//	int e;
//	if (check == 1 || check == 4 || check == 9 || check == 21 || check == 28 || check == 51 || check == 72 || check == 80)     //up
//	{
//		if (check == 1)
//		{
//			e = player1[1];
//			player1[1] = player1[38];
//			player1[38] = e;
//		}
//		if (check == 4)
//		{
//			e = player1[4];
//			player1[4] = player1[14];
//			player1[14] = e;
//		}
//		if (check == 9)
//		{
//			e = player1[9];
//			player1[9] = player1[31];
//			player1[31] = e;
//		}
//		if (check == 21)
//		{
//			e = player1[21];
//			player1[21] = player1[42];
//			player1[42] = e;
//		}
//		if (check == 28)
//		{
//			e = player1[28];
//			player1[28] = player1[84];
//			player1[84] = e;
//		}
//		if (check == 51)
//		{
//			e = player1[51];
//			player1[51] = player1[67];
//			player1[67] = e;
//		}
//		if (check == 72)
//		{
//			e = player1[72];
//			player1[72] = player1[91];
//			player1[91] = e;
//		}
//		if (check == 80)
//		{
//			e = player1[80];
//			player1[80] = player1[99];
//			player1[99] = e;
//		}
//	}
//	if (check == 17 || check == 54 || check == 62 || check == 64 || check == 87 || check == 93 || check == 95 || check == 98)     //down
//	{
//		if (check == 17)
//		{
//			e = player1[17];
//			player1[17] = player1[7];
//			player1[7] = e;
//		}
//		if (check == 54)
//		{
//			e = player1[54];
//			player1[54] = player1[34];
//			player1[34] = e;
//		}
//		if (check == 62)
//		{
//			e = player1[62];
//			player1[62] = player1[18];
//			player1[18] = e;
//		}
//		if (check == 64)
//		{
//			e = player1[64];
//			player1[64] = player1[60];
//			player1[60] = e;
//		}
//		if (check == 87)
//		{
//			e = player1[87];
//			player1[87] = player1[36];
//			player1[36] = e;
//		}
//		if (check == 93)
//		{
//			e = player1[93];
//			player1[93] = player1[97];
//			player1[97] = e;
//		}
//		if (check == 95)
//		{
//			e = player1[95];
//			player1[95] = player1[75];
//			player1[75] = e;
//		}
//		if (check == 98)
//		{
//			e = player1[98];
//			player1[98] = player1[79];
//			player1[79] = e;
//		}
//	}
//	Turn();
//}
//
//
//void check2(int check)
//{
//	int e;
//	if (check == 1 || check == 4 || check == 9 || check == 21 || check == 28 || check == 51 || check == 72 || check == 80)     //up
//	{
//		if (check == 1)
//		{
//			e = player2[1];
//			player2[1] = player2[38];
//			player2[38] = e;
//		}
//		if (check == 4)
//		{
//			e = player2[4];
//			player2[4] = player2[14];
//			player2[14] = e;
//		}
//		if (check == 9)
//		{
//			e = player2[9];
//			player2[9] = player2[31];
//			player2[31] = e;
//		}
//		if (check == 21)
//		{
//			e = player2[21];
//			player2[21] = player2[42];
//			player2[42] = e;
//		}
//		if (check == 28)
//		{
//			e = player2[28];
//			player2[28] = player2[84];
//			player2[84] = e;
//		}
//		if (check == 51)
//		{
//			e = player2[51];
//			player2[51] = player2[67];
//			player2[67] = e;
//		}
//		if (check == 72)
//		{
//			e = player2[72];
//			player2[72] = player2[91];
//			player2[91] = e;
//		}
//		if (check == 80)
//		{
//			e = player2[80];
//			player2[80] = player2[99];
//			player2[99] = e;
//		}
//	}
//	if (check == 17 || check == 54 || check == 62 || check == 64 || check == 87 || check == 93 || check == 95 || check == 98)     //down
//	{
//		if (check == 17)
//		{
//			e = player2[17];
//			player2[17] = player2[7];
//			player2[7] = e;
//		}
//		if (check == 54)
//		{
//			e = player2[54];
//			player2[54] = player2[34];
//			player2[34] = e;
//		}
//		if (check == 62)
//		{
//			e = player2[62];
//			player2[62] = player2[18];
//			player2[18] = e;
//		}
//		if (check == 64)
//		{
//			e = player2[64];
//			player2[64] = player2[60];
//			player2[60] = e;
//		}
//		if (check == 87)
//		{
//			e = player2[87];
//			player2[87] = player2[36];
//			player2[36] = e;
//		}
//		if (check == 93)
//		{
//			e = player2[93];
//			player2[93] = player2[97];
//			player2[97] = e;
//		}
//		if (check == 95)
//		{
//			e = player2[95];
//			player2[95] = player2[75];
//			player2[75] = e;
//		}
//		if (check == 98)
//		{
//			e = player2[98];
//			player2[98] = player2[79];
//			player2[79] = e;
//		}
//	}
//	Turn();
//}