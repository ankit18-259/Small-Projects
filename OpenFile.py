from sys import argv

script, filename = argv

def OpenFile:
    txt= open(filename)
    print "Here is your File %r:" % filename
    print txt.read()