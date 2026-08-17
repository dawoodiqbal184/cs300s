# The Task: Write a function encode_string(text) that takes a string of characters.
#The Goal: Loop through the string, count consecutive identical characters, and return a compressed string representing the character and its count.


def stringEncoder(x) :
    b = ""
    count = 1
    for i in range( 1 ,len(x)) :
        if x[i] == x[i - 1] :
            count += 1
        else :
            b += f"{x[i-1]}{count}"
            count = 1
    b += f"{x[-1]}{count}"
    return b


print(stringEncoder("aaabbca"))