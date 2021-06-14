Title = "CUSTOMER BANKING"
print("~"*len(Title))
print(Title)
print("~"*len(Title))

balance = float(input("\nPlease enter  balance of your Account: "))
print("=======*=======")
print(balance)
print("=======*=======")

while True:

	option = input("""\nSelect an option you want to perform
		1. Create Account
		2. Withdraw
		3. Deposit
		4. Modify Account
		5. Closing Account \n""")



	while option =='1' :
		title = "Creating Account"
		print("*"*len(title))
		print(title)
		print("*"*len(title))

				# FORMAT = ONLY GIVE INPUT AS NAMES
				# NOT IN NUMBER
				#INPUT = AHDDDHFDG
				#INPUT != 2214433

		while True:
			print("Enter the name of Account Holder")
			acc_holder = input("Acc_holder Name: ")
			if acc_holder[0].isalpha()!=True :
				print("Please Enter name in valid format")

				
			elif acc_holder.isalnum() == False:
				print("Please Enter name in valid format")
			else :
				break;
		while True:
			print("Enter the address of Account Holder")
			address = input("Address: ")
			if address[0].isalpha()!=True :
				print("Please Enter name in valid format")

				
			elif address.isalnum() == False:
				print("Please Enter name in valid format")
			else :
				break;
		while True:
			print("Enter mobile number of the Account Holder")
			mbl_number =  int(input("Mobile Number: "))
			print("Enter your Adhar Number")
			adhar_number =  int(input("Adhar Number: "))
			print("Enter age")
			age =  int(input("age: "))

			choice = input(""" Enter your choice
				1.Savings Account
				2.Current Account\n""")

			while choice == '1' :
				print("you have choosen Savings account")
				print("Congrats! Your account has been created")
				print("Thank you for creation of account in our bank")
				break
			while choice == '2' :
				print("you have choosen Current account")
				print("Congrats! Your account has been created")
				print("Thank you for creation of account in our bank")
				break
			break
		break

	while option == '2':
		print("You have choosen Withdraw")
		print("Enter amount to be withdrawed")
		Withdraw = float(input("Amount: "))

		if Withdraw > balance :
			print("You have insufficient amount in your Account")
		else :

			print(Withdraw)
			balance = balance - Withdraw
			print("Your Account balance is ......")
			print("============*=============")
			print(balance)
			print("============*=============")
		break

	while option == '3':
		
		print("Enter the amount to be deposited")
		Deposit = float(input("Amount: "))

		print(Deposit)
		balance = balance + Deposit
		print("Your Account balance is ......")
		print("==========*=========")
		print(balance)
		print("==========*=========")
		break

	while option == '4':
		title_1 = "MODIFYING ACCOUNT"
		print("="*len(title_1))
		print(title_1)
		print("="*len(title_1))

		

		selection = input("""Enter your selection

			1. Account holder name
			2. Address
			3. Mobile Number
			4. Age
			5. Adhaar Number \n""")

		while selection == '1':
			print("The Account Holder name that need to be modified: ")
			acc_holder = input("Acc_holder Name: ")
			if acc_holder[0].isalpha()!=True :
				print("Please Enter name in valid format")

			elif acc_holder.isalnum() == False:
				print("Please Enter name in valid format")
			else :
				break;

		while selection == '2':
		
			print("Enter the address of Account Holder that need to be modified: ")
			address = input("Address: ")
			if address[0].isalpha()!=True :
				print("Please Enter name in valid format")

			elif address.isalnum() == False:
				print("Please Enter name in valid format")
			else :
				break;
		while selection == '3':

			print("Enter mobile number that need to be modified")
			mbl_number =  int(input("Mobile number: "))
			break

		while selection == '4':
			print("Enter age to be modified")
			age = int(input("Age: "))
			break

		while selection == '5':
			print("Enter Adhaar Number to be modified ")
			adhar_number = int("Adhaar Number: ")
			break

		print("The modified detials are : ")
		print(f"Name: {acc_holder}")
		print(f"Address: {address}")
		print(f"Mobile Number: {mbl_number}")
		print(f"Age: {age}")
		print(f"Adhaar Number: {adhar_number}")
		break

	while option == '5':
		print("Please explain the reason for closing your account")
		reason = input()
		print("please fill the application")
		print('Enter the name: ')
		name = (input())
		print('Enter the age: ')
		age = int(input())
		print('Enter mobile number: ')
		mobile_number =   int(input())
		print("Enter adhar_number: ")
		adhar_numb =  int(input())
		print("your Account has been closed")
		break
