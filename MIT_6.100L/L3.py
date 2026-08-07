


# write a program that prints x as according to number entered by the user
a = int(input("Enter a non negative number : "))
while a > 0 :
    print('x')
    a -= 1



# Write a program that runs an infinite loop
#while True :
    #print("Noooo!")



# Create the lost woods game and if user not out of woods in 3 tries print a sad face 

counter = 0
where = str(input("Tell where you want to go : "))
while where == 'right' :
    print ("You are still in the woods !")
    where = input("Go left or right : ")
    if counter >= 2 :
        print(" :(")
    counter += 1
print("You are out of the woods !")



# For loop exercises 


for i in range(1 , 4 , 1) : 
    print(i)



for i in range(1 , 4 , 2) :
    print(i * 2)


for me in range(4 , 0 , -1) :
    print("$" * me)



# Write a porgram that takes number from user and print the running sum upto that number 

mysum = 0
x = int(input("Enter a number upto which you want running sum : "))
for i in range(1 , x) :
    mysum += i
print(f"The running sum upto {x} is {mysum}")

