from Tkinter import *

main = Tk()

def leftKey(event):
     print "Left key pressed"

def rightKey(event):
    print "Right key pressed"

frame = Frame(main)
main.bind('<KeyPress>', leftKey)
main.bind('<Right>', rightKey)
frame.pack()
main.mainloop()
