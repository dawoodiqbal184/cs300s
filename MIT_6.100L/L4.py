# write the programs using for loops that runs through a specific ranges and tell how many even numbers are in range :

evens1 = 0
for i in range(5) :
    if i % 2 == 0 :
        evens1 += 1
print(f"The evens in range from 0 to 5 are {evens1}")

i = 0
even2 = 0
for i in range(10) :
    if i % 2 == 0 :
        even2 += 1
print(f"The evens in range from 0 to 10 are {even2}")


even3 = 0
i = 0
for i in range(2 , 9 , 3) :
    if i % 2 == 0 :
        even3 += 1
print(f"The evens in range from 2 to 9 with step 3 are {even3}")


even4 = 0
i = 0
for i in range(-4 , 6 , 2) :
    if i % 2 == 0 :
        even4 += 1
print(f"The evens in range from -4 to 6 with step 0f 2 are {even4}")

even5 = 0
i = 0
for i in range(5 , 6) :
    if i % 2 == 0 :
        even5 += 1
print(f"The evens in range from 5 to 6 are {even5}")

# Assume you are given a string of characters and you have to pull out unique elements from it 



s = 'abca'
seen = ' '
unique = 0
j , i = 0 , 0
for i in s :
    if i not in seen :
        seen = seen + i
        unique += 1
        print(seen)
    else : continue
print(unique)