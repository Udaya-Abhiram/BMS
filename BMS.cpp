//PROGRAM ON BANKING MANAGEMENT SYSTEM

#include<iostream>
using namespace std;
class BMS
{
	public:
		char  acc_holder[20],address[20];
		long long int mobile_number,adhar_number;
		int age;
		void create_account();
		void display_account_holder();
		void deposit();
		void withdraw();
		void modifying_account();
		void closing_account();
};
void BMS::create_account()
{

	/* 
	FORMAT = ONLY GIVE INPUT AS LETTER FORMAT
	INPUT = AJFHDHFAK
	INPUT!=274252
	*/
	
	cout<<"Enter the necessary details in order to create account details"<<endl;
	cout<<"Enter the name of the account holder"<<endl;
	cin>>acc_holder;

	cout<<"Enter the address of the account holder"<<endl;
	cin>>address;

	cout<<"Enter the mobile number of the account holder"<<endl;
	cin>>mobile_number;
	cout<<"Enter the age of the account holder"<<endl;
	cin>>age;
	cout<<"Enter your aadhaar number"<<endl;
	cin>>adhar_number;
	int choice;
	cout<<"Enter your choice from the following"<<endl;
	while(true)
	{
		cout<<"1.Savings Account"<<endl;
		cout<<"2.Current Account"<<endl;
		cout<<"3.Exit"<<endl;
		cin>>choice;
		switch(choice)
		{
			case 1:
				cout<<"You have chosen savings account"<<endl;
				break;
			case 2:
				cout<<"You have chosen current account"<<endl;
				break;
			case 3:
				break;
			default:
				cout<<"\nInvalid choice\n";
		}
	break;
	}
	
	
	cout<<"===================*======================"<<endl;
	cout<<"Your account has been successfully created"<<endl;
	cout<<"Thank You for choosing our Bank"<<endl;
	cout<<"===================*======================"<<endl;
	cout<<endl;
}
void BMS::display_account_holder()
{
	cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
	cout<<"Account Holder Details"<<endl;
	cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
	
	cout<<"===================*======================"<<endl;
	cout<<"Your account number is: "<<acc_holder<<endl;
	cout<<"Your address is: "<<address<<endl;
	cout<<"Your age is: "<<age<<endl;
	cout<<"Your mobile number is : "<<mobile_number<<endl;
	cout<<"Your aadhar number is: "<<adhar_number<<endl;
	cout<<"===================*======================"<<endl;
	cout<<endl;
}
void BMS::deposit()
{
	float total_balance,deposit_amount;
	cout<<"-------------------------"<<endl;
	total_balance = 50000;
	cout<<total_balance<<endl;
	cout<<"--------------------------"<<endl;
	cout<<"Enter the amount to be deposited"<<endl;
	cin>>deposit_amount;
	total_balance += deposit_amount;
	cout<<"********************************************"<<endl;
	cout<<"The account balance is: "<<total_balance<<endl;
	cout<<"********************************************"<<endl;
	cout<<endl;
}
void BMS::withdraw()
{
	int total_balance,withdraw_amount;
	cout<<"---------------------------------"<<endl;
	total_balance = 500000;
	cout<<total_balance<<endl;
	cout<<"---------------------------------"<<endl;
	cout<<"Enter the amount to be withdraw: ";
	cin>>withdraw_amount;
	total_balance -=withdraw_amount;
	
	if(withdraw_amount>total_balance)
		cout<<"You have insufficient balance"<<endl;
		
	else
	{
	cout<<"********************************************"<<endl;
	cout<<"The account balance is: "<<total_balance<<endl;
	cout<<"********************************************"<<endl;
	}

}
void BMS::modifying_account()
{


	cout<<"The present details of the account holder are: "<<endl;
	cout<<"Your account number is: "<<acc_holder<<endl;
	cout<<"Your address is: "<<address<<endl;
	cout<<"Your age is: "<<age<<endl;
	cout<<"Your aadhar number is: "<<adhar_number<<endl;
	
	
	
	cout<<"Enter the details to modify your account"<<endl;
	cout<<"Enter the name of the account holder"<<endl;
	cin>>acc_holder;
	cout<<"Enter the address of the account holder"<<endl;
	cin>>address;
	cout<<"Enter the mobile number of the account holder"<<endl;
	cin>>mobile_number;
	cout<<"Enter the age of the account holder"<<endl;
	cin>>age;
	cout<<"Enter your aadhaar number"<<endl;
	cin>>adhar_number;
	
	cout<<"=================*====================="<<endl;
	cout<<"Modified Details"<<endl;
	cout<<"=================*====================="<<endl;
	
	cout<<"Your name is: "<<acc_holder<<endl;
	cout<<"Your address is: "<<address<<endl;
	cout<<"Your age is: "<<age<<endl;
	cout<<"Your aadhar number is: "<<adhar_number<<endl;
	cout<<endl;
}
void BMS::closing_account()
{
	char reason[30];
	cout<<"Please Explain  the reason for closing the account "<<endl;
	cin>>reason;
	
	cout<<"Please Fill the following details"<<endl;
	cout<<"acc_holder:";
	cin>>acc_holder;
	cout<<"\n mobile_number: ";
	cin>>mobile_number;
	cout<<"\n adhar_number: ";
	cin>>adhar_number;
	cout<<"please wait a minute"<<endl;
	cout<<"Your account has been successfully closed"<<endl;
	cout<<endl;
}

int main()
{
	int ch;
	BMS b;
	do
	{
	
		cout<<"*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*"<<endl;
		cout<<"BANKING MANAGEMENT SYSTEM"<<endl;
		cout<<"*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*"<<endl;
		cout<<"1.Creating an account"<<endl;
		cout<<"2.Displaying the details of the account holder"<<endl;
		cout<<"3.Depositing amount"<<endl;
		cout<<"4.Withdrawing amount"<<endl;
		cout<<"5.Modifying an account"<<endl;
		cout<<"6.Closing an account"<<endl;
		cout<<"7.Exit"<<endl;
		cout<<"Enter your choice"<<endl;
		cin>>ch;
		switch (ch)
		{
			case 1:
				b.create_account();
				break;
			case 2:
				b.display_account_holder();
				break;
			case 3:
				b.deposit();
				break;
			case 4:
				b.withdraw();
				break;
			case 5:
				b.modifying_account();
				break;
			case 6:
				b.closing_account();
				break;
			case 7:
				break;
			default:
			cout<<"Please select the given options"<<endl;
		}
		
	}while(ch!=7);
		return 0;

}


