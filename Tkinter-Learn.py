import Tkinter as tk

main= tk.Tk()

greeting = tk.Label(
    main, 
    text="Name",
    fg="White",
    bg="Black"
    )
greeting.pack()

entry = tk.Entry(
    bg="White",
    fg="Black", 
    width=50
    )
entry.pack()

button = tk.Button(
    text="Click me!",
    width=25,
    height=5,
    bg="blue",
    fg="yellow",
    )
button.pack()


main.mainloop()
