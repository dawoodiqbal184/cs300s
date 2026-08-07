
# You try it break----------------------------------------------
a = (13-4) / (12 * 12)
print("Here is the answer of a : ")
print(a)

print("The type of the 4 * 3 is : " , type(4*3))

print("The type of 4 * 0.3 is : " , type(4*0.3))

print("The integer value of 1 / 12 is : " , int(1/12))


# Swap two variables without third one -----------------------

x = 1
y = 6
print ('Value of x before sawp is : ', x )
print( "Value of y before swap is : " , y)
y = x + y
x = y - x
y = y - x
print( "Value of x after swap is : " , x)
print("Value of y after swap is : " , y)


# Take a verb from user and then replace the verb in the string "I can ____ better than you." and in next line print that verb 5 times 


text = input("Enter the verb : ")
print ("I can " , text , " better than you.")
print((text+' ' ) * 5)

# Make the guess a number game 
secret = 7
x = int(input("Enter any number : "))
if (secret == x) :
    print("You made the right guess!")
else : 
    print('Guess was wrong!')