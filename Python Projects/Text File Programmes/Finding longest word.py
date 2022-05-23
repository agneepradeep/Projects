def LongestWord(file_name):
    try:
        file = open(file_name,"r")
        lines = file.read()
        lines = lines.split()
        length = len(lines)
        word = ''
        max_length = 0
        for i in lines:
            if len(i)>max_length:
                max_length = len(i)
                word = i
        print("Longest word:",word,end =' ')
        print(",Length:",max_length)

    except FileNotFoundError:
        print("Something error occured")
        print("Please check whether you satisfy the follwing conditons or not.")
        print("Please mention the file with its extension")
        print("Please mention the full path name of the file, if not exist in current directory")
        
        file = eval(input("Type the file path :"))
        LongestWord(file)

file = eval(input("Type the file path :"))
LongestWord(file)
