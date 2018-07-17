// Bui.cpp : Defines the entry point for the console application.
//

#
#include "Model.h"
#include <conio.h>
#include<stdio.h>

using namespace std;
Controller u = Controller();



void send() {
	int chon;
	while (1)
	{
		cout << "-------MENU------\n"
                "1.Gui Tin Nhan\n"
                "2.Ctrl L De Gui\n"
                "3.Exit\n"
                "-----------------------\n";
		cout << "==>Nhap lua chon cua ban: ";
		cin >> chon;
		switch (chon) {
		case 1:
			u.SendMess();
			cout << "-----------------------" << endl;
			break;
		case 2:
			u.SendMess_ctr_l();
			cout << "-----------------------" << endl;
			break;
		case 3:
			return;
		}
	}
}
void menu(){
	int choose;
while (1)
	{

		cout << "-------MENU ------\n"
                "1.Hien thi tin nhan\n"
                "2.Thong tin tin nhan\n"
                "3.Gui tin nhan\n"
                "4.Them ban\n"
                "5.Hien thi danh sach ban\n"
                "6.Chan \n"
                "7.Update \n"
                "8.Thong tin ban be\n"
                "9.Thoat\n"
                "-----------------------\n";
		cout << "==>Nhap vao lua chon cua ban: ";
		cin >> choose;
		switch (choose) {
			case 1:
				//system("cls");
				u.showmess();
				break;
			case 2:
				//system("cls");
			//	u.ShowMessDetail();			
				break;
			case 3:
				//system("cls");
				send();
				break;
			case 4:
				//system("cls");
				u.AddFriend();
				break;
			case 5:
				//system("cls");
				//u.ShowFriend_ctr_C();
				break;
			case 6:
				//system("cls");
				//u.BlockFriend();
				break;
			case 7:
				//system("cls");
				//u.Update_fr();
				break;
			case 8:
				//system("cls");
				u.Detail_fr();
				break;
			case 9:
				//system("cls");
				break;
			default:
				printf("\r\n>> ERROR, Reselect..");
				getch();
		}
		if (choose == 9)
		{
			break;
		}
	}
}

int main()
{
	int choose = 0;
	do{
		cout << "chon cac chuc nang sau:" << endl;
		cout << "1.Dang nhap" << endl;
		cout << "2.Dang ky" << endl;
		cout << "3.Dang xuat" << endl;
		cout << "4.Thoat" <<endl;
		cout << "=Nhap lua chon: ";
		cin.ignore();
		cin>>choose;
		switch(choose){

			case 1:
				//system("cls");
				u.Login();
				if(u.isLogin){
						menu();
				}
				break;
			case 2:
				//system("cls");
				u.SingUp();
				break;
			case 3:
				//system("cls");
				u.SignOut();
				break;
			case 4:
				break;
		default:
			printf("\r\n>>Select:");
			getch();
		}
		if (choose == 4)
		{
			break;
		}
	} while (1);

	return 0;
}

