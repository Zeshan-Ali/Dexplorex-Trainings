# while loop

#to keep asking for input until valid number is entered
'''
num = 10   # control variable
play_again = input("do yu want t play again: enter y for yes and n for no")

while play_again != 'n':   # condition
    print("the game is on")

 '''   


'''

age = int(input("Please enter your age non negative:")) # control variable

while (age < 0): # condition 
    age = int(input("Please enter your age non negative:"))
else:
    print("your age is:",age)

'''

sal = int(input("Please enter your saalry:(10000,25000,75000,1000000)"))
exp = int(input("Please enter your experience in years:(enter from this values 2,3,4,5)"))
bonus_task= int(input("Please enter your b onus tasks ,(enter from these 5,4,10,7) "))

if(sal ==10000 and exp==2 and bonus_task==5):
    print("your bonus is 1500" ,sal+1500)
elif(sal ==10000 and exp==3 and bonus_task==10):
    print("your bonus is 2500")
elif(sal ==2000 and exp==3 and bonus_task==4):
    print("your bonus is 2000")
elif(sal ==75000 and exp==4 and bonus_task==7):
    print("your bonus is 3500")
elif(sal ==100000 and exp==5 and bonus_task==10):
    print("your bonus is 5000")
else:
    print("Enter valid values :")
