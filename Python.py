from sys import argv

script, filename = argv

txt= open(filename)
print "Here is your File %r:" % filename
print txt.read()