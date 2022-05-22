def reverse(string):
    length = len(string)
    reversed_string = ""
    for i in range(len(string)-1,-1,-1):
        reversed_string = reversed_string + string[i]
    print("The Reversed string is :",reversed_string)

def Toggle_string(string):
    length = len(string)
    Toggle_string = ""
    for i in range(0,length):
        if string[i].islower():
            Toggle_string = Toggle_string + string[i].upper()
        elif string[i].isupper():
            Toggle_string = Toggle_string + string[i].lower()
    print("The Toggle string is :",Toggle_string)

while True:
    string = input("Enter a String :")
    print("Operations possible over the string")
    print("1.Capitalize")
    print("2.Find length")
    print("3.Title Case")
    print("4.Uppercase")
    print("5.Lowercase")
    print("6.Toggle Case")
    print("7.Reverse string")
    Choice = int(input("Enter your choice as per the above :"))
    if Choice == 1:
        print("The Capitalize String is :",string.capitalize())
    if Choice == 2:
        print("The Length of String is :",len(string))
    if Choice == 3:
        if string.istitle() is True:
            print("The given String is in Title case")
        else:
            print("The given String is not in Title case")
    if Choice == 4:
        print(string.upper())
    if Choice == 5:
        print(string.lower())
    if Choice == 6:
        Toggle_string(string)
    if Choice == 7:
        reverse(string)

