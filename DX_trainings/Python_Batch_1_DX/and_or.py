# this file is for and or impimentation in python

# first we impliment and implimentation
lottery_win = input("have you won the lottery? enter yes or no :")
if(lottery_win !="no"):
    amount_of_lottery = int(input("Enter the amount of lottery:"))
    if(lottery_win == "yes" and amount_of_lottery >= 50000):
        print("You can enjoy your life")
    else:
        print("you cant enjoy your life , kaam kro")
else:
    print("Yuu should try one more time")


# or implimentation



id_card_status = input("have you id card enter y for yes and n for no:")

if(id_card_status != "n"):
    b_form_status = input("have yo b form enter y for yes, n for:")
    if(b_form_status == "y" or id_card_status== "y"):
        print("you can get admission")
    else:
        print("you ar enot eligible")
else:
    print("please eneter correct input")

