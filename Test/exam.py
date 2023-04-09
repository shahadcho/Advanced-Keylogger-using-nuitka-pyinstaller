from tkinter import *



def convert ():
    F = float (fahrenheit_entry.get())
    C=(F -32)* 5 / 9
    display_celsius_label["text"]=str(C)
def convert_c():
    F = float (fahrenheit_entry.get())
    C=(F -32)* 5 / 9
    display_f_label["text"]=str(C)
my_window=Tk()
friendly_label_1=Label(my_window,text="Enter Fahrenheit")
friendly_label_2=Label(my_window,text="Celsius Temperature")
display_celsius_label=Label(my_window)
display_f_label=Label(my_window)
fahrenheit_entry = Entry(my_window)
celsius_entry = Entry(my_window)
convert_button=Button(my_window, text=">>>",command=convert)
convert_button_1=Button(my_window, text="<<<",command=convert_c)

friendly_label_1.grid(row=0, column=0)
friendly_label_2.grid(row=0, column=1)
fahrenheit_entry.grid(row=1, column=0)
celsius_entry.grid(row=1, column=1)
display_celsius_label.grid(row=2, column=1)
display_f_label.grid(row=2, column=0)
convert_button.grid(row=3,column=0)
convert_button_1.grid(row=3,column=1)

my_window.mainloop()