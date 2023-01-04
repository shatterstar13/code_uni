#include <string>
#include <iostream>
#include "Purchase.h"
#include <windows.h>
#include "Customer.h"

using namespace std;

HANDLE c = GetStdHandle(STD_OUTPUT_HANDLE);

Customer::Customer()
{
	address = "";
	email = "";
}

void Customer::setCustomer(string name, string id, string contact, string address, string email, string CNIC)
{
	User::setUser(name, id, contact);
	this->address = address;
	this->email = email;
	this->CNIC = CNIC;
}

void Customer::print()
{
	User::print();
	cout << "Address : " << address << endl;
	cout << "Email : " << email << endl;
}

string Customer::getAddress()
{
	return address;
}

string Customer::getEmail()
{
	return email;
}

string Customer::getCNIC()
{
	return CNIC;
}

void Customer::displayCustomerMenu()
{
	SetConsoleTextAttribute(c, 14);
	cout << "\n\n\t\t\t\t\t\t_________________________________________________________________\n";
	cout << "\n\t\t\t\t\t\t\t           INVENTORY MANAGEMENT SYSTEM\n";
	//cout << "\t\t\t\t\t\t_________________________________________________________________\n";
	cout << "\t\t\t\t\t\t\t                  CUSTOMER MENU\n";
	cout << "\t\t\t\t\t\t_________________________________________________________________\n";
	cout << "\n\t\t\t\t\t\t 1 - PURCHASE ITEM(s) FROM STOCK";
	cout << "\n\t\t\t\t\t\t 2 - DISPLAY ITEMS CURRENTLY IN STOCK";
	cout << "\n\t\t\t\t\t\t 3 - SEARCH ITEM(s) FROM STOCK";
	cout << "\n\t\t\t\t\t\t 4 - UPDATE PURCHASE";
	cout << "\n\t\t\t\t\t\t 5 - GENERATE RECEIPT";
	cout << "\n\t\t\t\t\t\t 6 - DELETE A PURCHASED ITEM";
	cout << "\n\t\t\t\t\t\t 7 - EXIT & RETURN TO MAIN MENU (ALL CHANGES WILL BE SAVED)\n";
	cout << "\t\t\t\t\t\t_________________________________________________________________\n";
	SetConsoleTextAttribute(c, 15);
}

int Customer::getCustomerChoice()
{
	int choice = -1;
	while (!((choice > 0) && (choice < 8)))
	{
		cout << "\n\n\n\t\tEnter your choice: ";
		cin >> choice;
		system("cls");
		if (!((choice > 0) && (choice < 8)))
		{
			cout << "\n\n\t\t\t\t\t\t\u001b[35mPlease choose a valid number from the following options of menu.\u001b[0m\n\n";
			displayCustomerMenu();
		}
		cin.clear();
		cin.ignore(1000, '\n');
	}
	return choice;
}

void Customer::gotoXY(int x, int y)// to set position of cursor
{
	COORD coord{};
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

//funtion to Save Receipt to file against customer details
void Customer::saveReceipt()
{
	long double totalBill = 0;
	ofstream fout;
	fout.open(getName() + ".txt");
	fout << "Customer Name: " << getName() << endl;
	fout << "Customer CNIC: " << getCNIC() << endl;
	fout << "Customer Phone Number: " << getPhone() << endl;
	fout << "Customer Address: " << getAddress() << endl;
	fout << "Customer Email: " << getEmail() << endl;

	fout << "-------------------------------------------------------------------------------------------";
	fout << "\n\t\t\t\t\t\tRECEIPT\n";
	fout << "-------------------------------------------------------------------------------------------";
	fout << "\nITEM NAME\t\tSINGLE ITEM PRICE\t\tITEM QUANTITY\t\tTOTAL PRICE\n";
	fout << "-------------------------------------------------------------------------------------------\n";
	for (int i = 0; i < purchaseItem.getPurchaseSize(); i++)
	{
		fout << purchaseItem.getPurchaseItemArray()[i].getItemName() << "\t\t\t\t" << purchaseItem.getPurchaseItemArray()[i].getPrice() << "\t\t\t\t" << purchaseItem.getPurchaseItemArray()[i].getQuantity() << "\t\t   " << purchaseItem.getPurchaseItemArray()[i].getTotalPrice() << endl;
		totalBill += purchaseItem.getPurchaseItemArray()[i].getTotalPrice();
	}
	fout << "-------------------------------------------------------------------------------------------\n";
	fout << "TOTAL BILL : " << totalBill << "$\n";
	fout << "-------------------------------------------------------------------------------------------\n";
}

void Customer::customerAccess()
{
	string itemName;
	string itemCode;
	bool receiptStatus = false;
	int count = 0;
	obj.loadStock();
	int customerChoice;
	string name, cnic, phone, address, email;
	cout << "Enter your name: ";
	getline(cin, name);
	cout << "Enter your CNIC: ";
	getline(cin, CNIC);
	cout << "Enter your phone number: ";
	getline(cin, phone);
	cout << "Enter your address: ";
	getline(cin, address);
	cout << "Enter your email: ";
	getline(cin, email);
	setCustomer(name, "0", CNIC, phone, address, email);
	do
	{
		displayCustomerMenu();
		customerChoice = getCustomerChoice();
		switch (customerChoice)
		{
		case 1:
		{
			obj.printStock();
			if (receiptStatus == true)
			{
				cout << "\n\n\n\t\t\u001b[34mReceipt has already generated.\u001b[0m" << endl;
			}
			else
			purchaseItem.addPurshase(obj);
			cin.get();
			system("cls");
			//purchaseItem.displayReceipt();
			//customerChoice = 4;
			/*cout << "Press Enter to continue...";
			cin.get();
			system("cls");*/
			break;
		}

		case 2:
		{
			obj.printStock();
			system("pause");
			system("cls");
			break;
		}

		case 3:
		{
			if (obj.getSize() != 0)
			{
				int indexOfItem = -1;

				char choice = 'y';
				cin.ignore();
				while (choice == 'y' || choice == 'Y')
				{
					do {
						string itemname;
						cout << "\n\n\n\t\tEnter item name: ";
						cin >> itemname;
						indexOfItem = obj.searchItemName(itemname);
						if (indexOfItem == -1)
							cout << "\u001b[31m\n\n\t\tItem not found" << endl << "Please enter correct item Name.\u001b[0m\n";
						else
						{
							cout << "\n\n\tItem name: " << obj.getItem(indexOfItem).getItemName() << endl;
							cout << "\n\tItem code: " << obj.getItem(indexOfItem).getItemCode() << endl;
							cout << "\n\tItem quantity: " << obj.getItem(indexOfItem).getQuantity() << endl;
							cout << "\n\tItem price: " << obj.getItem(indexOfItem).getPrice() << endl;
							cout << "\n\tItem total price: " << obj.getItem(indexOfItem).getTotalPrice() << endl;
						}
					} while (indexOfItem == -1);
					cout << endl << "\n\n\tDo you want to search another item? (press y for yes and any other key for no): ";
					cin >> choice;
				}
			}
			else
			{
				cout << "\n\n\t\t\t\t\t\t\u001b[35mSTOCK IS EMPTY!!.\u001b[0m\n\n";
			}

			break;
		}

		case 4://update purchased item list 
		{
			if (receiptStatus == true)
			{
				cout << "\n\n\n\t\t\u001b[34mReceipt has already been generated.\u001b[0m" << endl;
			}
			else if (purchaseItem.getNumberOfPurchasedItems() > 0)
			{
				purchaseItem.displayReceipt();
				int num = -1;
				string name;
				while (num > purchaseItem.getNumberOfPurchasedItems() || num < 0)
				{
					cout << "\n\n\t\tEnter the number of item you want to update: ";
					cin >> num;
					if (num > purchaseItem.getNumberOfPurchasedItems() || num < 0)
						cout << "\n\n\t\t\u001b[31mYou have entered wrong number of items!\u001b[0m\n";
				}

				bool flag = true;
				for (int i = 0; i < num; i++)
				{
					do
					{
						if (flag == false)
						{
							cout << "\n\n\t\t\u001b[31mThe Item name you entered did not match to any item!!\u001b[0m\n";
							cout << "\n\t\tPlease enter correct Item name.\n";
						}
						cout << "\n\t\tEnter the name of item: ";
						cin >> name;
						flag = purchaseItem.updatePurchasedItem(name, obj);

					} while (flag == false);
				}
			}
			else
			{
				cout << "\n\n\t\t\u001b[34mNo items purchased yet.\u001b[0m" << endl;
			}

			cout << "\n\n\tPress Enter to continue...";
			cin.get();
			system("cls");
			break;
		}


		case 5:
		{
			if (purchaseItem.getNumberOfPurchasedItems() > 0)
			{
				SetConsoleTextAttribute(c, 10);
				gotoXY(0, 2);
				cout << "------------------------------------------------------------------------------------------------------------";
				gotoXY(0, 3);
				cout << "\n\t\t\t\t\t\tRECEIPT\n";
				purchaseItem.displayReceipt();
				SetConsoleTextAttribute(c, 15);
				receiptStatus = true;
			}
			else
			{
				cout << "\n\n\t\t\u001b[34mNo items purchased yet.\u001b[0m" << endl;
			}
			cout << "\n\n\tPress Enter to continue...";
			cin.get();
			system("cls");
			break;
		}

		case 6:
		{
			if (receiptStatus == true)
			{
				cout << "\n\n\t\t\u001b[34mReceipt is already generated.\u001b[0m" << endl;
			}
			else if (purchaseItem.getNumberOfPurchasedItems() > 0 && receiptStatus == false)
			{
				purchaseItem.displayReceipt();
				string name;
				char choice = 'y';

				bool flag = true;
				while (choice == 'y' || choice == 'Y')
				{
					cin.ignore();
					if (purchaseItem.getPurchaseSize() != 0)
					{
						do
						{
							if (flag == false)
							{
								cout << "\n\n\t\t\u001b[31mThe Item name you entered did not match to any item\u001b[0m\n";
								cout << "\n\n\t\tPlease enter correct Item name .\n";
							}
							cout << "\n\t\tEnter the name of item: ";
							getline(cin, name);
							flag = purchaseItem.deletePurchasedItem(name, obj);

						} while (flag == false);
					}
					else
					{
						cout << "\n\t\tNo more items can be removed because now Shoping cart is empty." << endl;
						break;
					}
					cout << "\n\t\tDo you want to remove another item? (press y for yes and any other key for no): ";
					cin >> choice;
				}
			}
			else
			{
				cout << "\n\n\t\t\u001b[34mNo items purchased yet.\u001b[0m" << endl;
			}
			cout << "\n\t\tPress Enter to continue...";
			//cin.ignore();
			cin.get();
			system("cls");
			break;
		}

		case 7:
		{
			obj.saveStock();
			saveReceipt();
			break;
		}


		}//switch
	} while (customerChoice != 7);
}