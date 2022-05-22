"""
This program is designed to print a whole year Calendar and store it as a text file.
The week of the month starts from Sunday and ends with Saturday.This programe store
the text file of "Calendar{year}.txt".You can see a preview of the calendar in your IDLE.
"""
from calendar import *

text_calendar = TextCalendar(firstweekday=6)
Year = int(input("Type The Year :"))
text_data = text_calendar.formatyear(Year)
print(text_data)
file = open("Calendar" + str(Year) + ".txt",'w')
file.write(text_data)
file.close()
