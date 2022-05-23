from tkinter import *
import time

root = Tk()

def clock():
    hour = time.strftime("%I")
    minute = time.strftime("%M")
    seconds = time.strftime("%S")
    am_pm = time.strftime("%p")
    day = time.strftime("%d")
    month = time.strftime("%m")
    year = time.strftime("%Y")

    my_label.configure(text = hour+":"+minute+":"+seconds+" "+am_pm+" "+day+"/"+month+"/"+year)
    my_label.after(1000,clock)
    

my_label = Label(root,text ="",font = "Cambria 15",fg='Dodgerblue2',bg = "snow")
my_label.pack()

clock()

root.mainloop()

