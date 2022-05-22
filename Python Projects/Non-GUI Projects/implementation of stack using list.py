from sys import exit

def isempty(stack):
    if len(stack) == 0:
        return True
    else:
        top = len(stack)-1
        return False
def push(stack, element):
    stack.append(element)
    top = len(stack)-1

def pop(stack):
    if isempty(stack) == True:
        print("UNDERFLOW")
    else:
        element = stack.pop()
        top = len(stack)-1
        print(element)

def peek(stack):
    if isempty(stack) == True:
        return None
    else:
        top = len(stack)-1
        print(stack[top])

def show_stack(stack):
    if isempty(stack) == True:
        print("NO ELEMENT")
    else:
        print("Top <== ",end = '')
        i = len(stack)-1
        while i>=0:
            if i == 0:
                print(stack[i])
            else:
                print(stack[i],' <== ', end = '')
            i = i-1

stack = []
top = None
while True:
    print('1.PUSH ELEMENT')
    print('2.POP')
    print('3.PEEK')
    print('4.SHOW STACK')
    print('5.EXIT')
    choice = int(input("Enter the Choice :"))
    if choice == 1:
        Element = eval(input("Enter the Element :"))
        push(stack, Element)
    elif choice == 2:
        pop(stack)
    elif choice == 3:
        peek(stack)
    elif choice == 4:
        show_stack(stack)
    elif choice == 5:
        break
    else:
        print("INVALID CHOICE")
exit()
