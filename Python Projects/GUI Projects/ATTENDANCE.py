from tkinter import *
from tkinter import ttk
from tkinter import messagebox

def Calculate_Attendance():
    CT = Class_Taken_Var.get()
    CA = Class_Attended_Var.get()
    CS = 0
    if (ClassValue.get() == "Theory/Lab") or Class_Taken_Var.get() == 0 or Class_Attended_Var.get() == 0:
        if (ClassValue.get() == "Theory/Lab"):
            messagebox.showinfo("Field Not Selected","Please Select the Class Type")
        elif (Class_Taken_Var.get() == 0):
            messagebox.showinfo("Field Not Selected","Please Type How Many Class(s) Taken")
        elif (Class_Attended_Var.get() == 0):
            messagebox.showinfo("Field Not Selected","Please Type How Many Class(s) You Have Attended")
    elif (ClassValue.get() == "Theory"):
        Percentage = (CA/CT)*100
        while (Percentage > 75):
            CT = CT + 1
            Percentage = (CA/CT)*100
            CS = CS + 1
        messagebox.showinfo("RESULT",f"{CS} no. of Theory Class(s) can be Skipped")
    elif (ClassValue.get() == "Lab"):
        Percentage = (CA/CT)*100
        while (Percentage > 75):
            CT = CT + 2
            Percentage = (CA/CT)*100
            CS = CS + 1
        messagebox.showinfo("RESULT",f"{CS} no. of Lab Class(s) can be Skipped")

root = Tk()
root.title("Attendance Calculator")
root.geometry("320x290")
root.resizable(0,0)
Photo = PhotoImage(file = "logo.png")
root.iconphoto(False,Photo)
style = ttk.Style()
style.theme_use('vista')
Frame1 = ttk.LabelFrame(root,text="Class Type")
Frame1.pack(fill = 'x')
ClassValue = StringVar()
Choice = ttk.OptionMenu(Frame1, ClassValue,"Theory/Lab","Theory","Lab")
Choice.pack(fill = 'x',pady= 5)
ClassValue.set("Theory/Lab")

Frame2 = ttk.LabelFrame(root,text="Class(s) Taken")
Frame2.pack(fill = 'x',pady= 20)
Class_Taken_Var = IntVar()
Entry1 = ttk.Entry(Frame2,textvariable=Class_Taken_Var)
Entry1.pack(fill = 'x',pady= 10)
Class_Taken_Var.set(0)

Frame3 = ttk.LabelFrame(root,text="Class(s) Attended")
Frame3.pack(fill = 'x')
Class_Attended_Var = IntVar()
Entry2 = ttk.Entry(Frame3,textvariable=Class_Attended_Var)
Entry2.pack(fill = 'x',pady= 10)
Class_Attended_Var.set(0)

Calculate_Button = ttk.Button(root, text='Calculate Attendance',command=Calculate_Attendance)
Calculate_Button.pack(fill = 'x',pady = 10)
root.mainloop()