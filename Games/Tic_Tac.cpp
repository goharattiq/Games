//#include <iostream>
//#include <conio.h>
//#include <Windows.h>
//#include <string>
//#include <cstdlib>
//#include <ctime>
//
//using namespace std;
//
//char S[10] = { '0','1','2','3','4','5','6','7','8','9' };
//int t = 2;
//int win[3] = { 0 };
//char ch = 'n';
//string name;
//
//void gotoxy(short int, short int);
//void setcolor(int );
//void display(string name);
//void logic(string name);
//void Check(string name);
//void again();
//
//
//void gotoxy(short int x, short int y)
//{
//    COORD cur = { x, y }; SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), cur);
//}
//
//void setcolor(int c)
//{
//    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
//    CONSOLE_SCREEN_BUFFER_INFO csbi;
//    GetConsoleScreenBufferInfo(hConsole, &csbi);
//    SetConsoleTextAttribute(hConsole, (csbi.wAttributes & 0xFFF0) | (WORD)c); 
//}
//
//
//void main()
//{
//	if (ch=='n')
//	{
//		setcolor(14);
//		gotoxy(8, 0);
//		cout << "********** TIC-TAC-TOE **********\n\n";
//		setcolor(8);
//		gotoxy(4, 3);
//		cout << "Press [1] To play with 2nd Player" << endl;
//		gotoxy(4, 4);
//		cout << "Press [2] To play with Computer" << endl;
//		char n;
//	hell: gotoxy(4, 6);
//		n = _getche();
//		switch (n)
//		{
//		case '1': {
//			name = "Player 2"; break;
//		}
//		case '2': {
//			name = "Computer"; break;
//		}
//		default: {
//			gotoxy(4, 5);
//			cout << "Press again";
//			goto hell;
//		}
//		}
//	}
//	display(name);
//}
//
//void display(string name)
//{
//	system("CLS");
//	setcolor(14);
//	gotoxy(8 , 0);
//	cout << "********** TIC-TAC-TOE **********\n\n";
//	gotoxy(8, 2);
//	setcolor(9);
//	cout << "Player 1 (X) "<<win[0];
//	setcolor(10);
//	cout <<"  "<< name << " (O) "<<win[1];
//	setcolor(8);
//	cout << "  Draw " << win[2];
//	setcolor(14);
//	gotoxy(8, 5);
//	cout << S[1] << "\t|" << S[2] << "\t|" << S[3] << endl;
//	gotoxy(8, 6);
//	cout << "________|_______|_________\n";
//	gotoxy(8, 7);
//	cout << "\t|\t|\t\n";
//	gotoxy(8, 8);
//	cout << S[4] << "\t|" << S[5] << "\t|" << S[6] << endl;
//	gotoxy(8, 9);
//	cout << "________|_______|_________\n";
//	gotoxy(8, 10);
//	cout << "\t|\t|\t\n";
//	gotoxy(8, 11);
//	cout << S[7] << "\t|" << S[8] << "\t|" << S[9] << endl;
//	gotoxy(8, 12);
//	cout << "\t|\t|\t\n";
//	Check(name);
//}
//
//
//void logic(string name) 
//{
//	if (t==11)
//	{
//		setcolor(14);
//		gotoxy(8, 15);
//		cout << "Game Draw\n";
//		win[2] += 1;
//		again();
//	}
//	int n;
//	char de;
//	if (t % 2 == 0)
//	{
//   label2:gotoxy(8,15);
//		setcolor(9);
//	    cout << "Its Player 1 Turn : ";
//		de = _getche();
//		n=static_cast<int>(de);
//		n =n - 48;
//		if (n >= 0 && n <= 9)
//		{
//			if (S[n] == 'O' || S[n] == 'X')
//				goto label2;
//			S[n] = 'X';
//		}
//		else
//			goto label2;
//	}
//	if (t % 2 == 1)
//	{
//		if (name=="Computer")
//		{
//			setcolor(10);
//		label1: gotoxy(8, 15);
//			cout << "Its " << name << " Turn : ";
//			int n;
//			int min = 1;
//			int max = 9;
//			srand(time(0));
//			n = rand() % (max-min+1)+min;
//			if (S[n] == 'O' || S[n] == 'X')
//			goto label1;
//			S[n] = 'O';
//		}
//		else
//		{
//			setcolor(10);
//		label3:gotoxy(8, 15);
//			cout << "Its " << name << " Turn : ";
//			de=_getche();
//			n = static_cast<int>(de);
//			n = n - 48;
//			if (n >= 0 && n <= 9)
//			{
//				if (S[n] == 'O' || S[n] == 'X')
//					goto label3;
//				S[n] = 'O';
//			}
//			else
//				goto label3;
//		}
//	}
//	t++;
//	display(name);
//}
//
//
//void Check(string name)
//{
//	if (S[1] == S[2] && S[2] == S[3])
//	{
//		if (S[1] == 'X')
//		{
//			setcolor(9);
//			gotoxy(8, 15);
//			cout << "Player 1 Won\n";
//			win[0] += 1;
//			again();
//		}
//		if (S[2] == 'O')
//		{
//			setcolor(10);
//			gotoxy(8, 15);
//			cout << name<<" Won\n"<<endl;
//			win[1] += 1;
//			again();
//		}
//	}
//	if (S[4] == S[5] && S[5] == S[6])
//	{
//		if (S[4] == 'X')
//		{
//			setcolor(9);
//			gotoxy(8, 15);
//			cout << "player 1 won" << endl;
//			win[0] += 1;
//			again();
//		}
//		if (S[4] == 'O')
//		{
//			setcolor(10);
//			gotoxy(8, 15);
//			cout << name << " Won\n" << endl;
//			win[1] += 1;
//			again();
//		}
//	}
//	if (S[7] == S[8] && S[8] == S[9])
//	{
//		if (S[7] == 'X')
//		{
//			setcolor(9);
//			gotoxy(8, 15);
//			cout << "player 1 won" << endl;
//			win[0] += 1;
//			again();
//		}
//		if (S[7] == 'O')
//		{
//			setcolor(10);
//			gotoxy(8, 15);
//			cout << name << " Won\n" << endl;
//			win[1] += 1;
//			again();
//		}
//	}
//	if (S[1] == S[5] && S[5] == S[9])
//	{
//		if (S[1] == 'X')
//		{
//			setcolor(9);
//			gotoxy(8, 15);
//			win[0] += 1;
//			cout << "player 1 won" << endl;
//			again();
//		}
//		if (S[1] == 'O')
//		{
//			setcolor(10);
//			gotoxy(8, 15);
//			cout << name << " Won\n" << endl;
//			win[1] += 1;
//			again();
//		}
//	}
//	if (S[3] == S[5] && S[5] == S[7])
//	{
//		if (S[3] == 'X')
//		{
//			setcolor(9);
//			gotoxy(8, 15);
//			win[0] += 1;
//			cout << "player 1 won" << endl;
//			again();
//		}
//		if (S[5] == 'O')
//		{
//			setcolor(10);
//			gotoxy(8, 15);
//			cout << name << " Won\n" << endl;
//			win[1] += 1;
//			again();
//		}
//	}
//	if (S[1] == S[4] && S[4] == S[7])
//	{
//		if (S[4] == 'X')
//		{
//			setcolor(9);
//			gotoxy(8, 15);
//			win[0] += 1;
//			cout << "player 1 won" << endl;
//			again();
//		}
//		if (S[4] == 'O')
//		{
//			setcolor(10);
//			gotoxy(8, 15);
//			cout << name << " Won\n" << endl;
//			win[1] += 1;
//			again();
//		}
//	}
//	if (S[2] == S[5] && S[5] == S[8])
//	{
//		if (S[2] == 'X')
//		{
//			setcolor(9);
//			gotoxy(8, 15);
//			cout << "player 1 won" << endl;
//			win[0] += 1;
//			again();
//		}
//		if (S[2] == 'O')
//		{
//			setcolor(10);
//			gotoxy(8, 15);
//			cout << name << " Won\n" << endl;
//			win[1] += 1;
//			again();
//		}
//		}
//	if (S[3] == S[6] && S[6] == S[9])
//	{
//		if (S[3] == 'X')
//		{
//			setcolor(10);
//			gotoxy(8, 15);
//			cout << "player 1 won"<<endl;
//			win[0] += 1;
//			again();
//		}
//		if (S[5] == 'O')
//		{
//			setcolor(10);
//			gotoxy(8, 15);
//			cout << name << " Won\n" << endl;
//			win[1] += 1;
//			again();
//		}
//	}
//	logic(name);
//}
//
//void again()
//{
//	char i = 48;
//	for (int o=0; o < 10;o++)
//	{
//		S[o] = i;
//		i++;
//	}
//	t = 2;
//	cout << "Press[y] If you want to play again"<<endl;
//	ch = _getche();
//	ch = tolower(ch);
//	if (ch == 'y')
//		main();
//	else
//		exit(1);
//}