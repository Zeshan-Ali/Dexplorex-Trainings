
print("Welcome to jazz customer care")
 
option = int(input("""Please enter number from 1-4
1 for card details
2 for balance inuiry
3 for jazz cash
4 for history: """))

if(option == 1):
    print("you card number is.....")
elif (option == 2):

    print("your balance is 345")
elif (option == 3):
    print(" you jazz acash balance is 400")
elif (option==4):
    print("you have called usama at 10 AM and message umar at 11 AM....")
else:
    print("please enter  value from 1 to 4")

country = input("Please enter your country(in small letters): ")
if(country == "pakistan"):
    print("Assalamo alaium")
elif (country == "india"):
    print("Namasty")
elif (country == "uk"):
    print("Hello")
else:
    print("Bhag jao")



lottery_win = input("have you won the lottery? enter yes or no :")
if(lottery_win !="no"):
    amount_of_lottery = int(input("Enter the amount of lottery:"))
    if(lottery_win == "yes" and amount_of_lottery >= 50000):
        print("You can enjoy your life")
    else:
        print("you cant enjoy your life , kaam kro")
else:
    print("Yuu should try one more time")



    