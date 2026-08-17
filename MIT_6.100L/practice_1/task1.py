# A program that finds the Collatz steps for a number from user 
def collatzStep(a) :
    count = 0
    path = [a]
    while a != 1 : 
        if a % 2 == 0 :
            a //= 2
        else :
            a *= 3
            a += 1
        count += 1
        path.append(a)
    print(f"The collatz steps are {count}")
    return path

a = int(input("Enter the number to find the collatz steps : "))
print(collatzStep(a))