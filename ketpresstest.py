import Tkinter as tk

def ketpress(event):
    print event.char

root=tk.Tk();
root.bind("<KeyPress>",ketpress)
