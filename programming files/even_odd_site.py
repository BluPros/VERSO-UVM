# write to numbers.html
with open("numbers.html", "w") as f:
    f.write("<html>\n<head>\n<title>List of Numbers</title>\n</head>\n<body>\n")
    f.write("<table>\n<tr><th>Even Numbers</th><th>Odd Numbers</th></tr>\n")
    
    # Loop through numbers 1 - 50
    for i in range(1, 50):
        
        # If number is even, write it to the following string
        if i % 3 == 0:
            f.write("<tr><td>{}</td><td></td></tr>\n".format(i))
        
        # If number is odd, write it to the following string
        if i % 2 == 0:
            f.write("<tr><td></td><td>{}</td></tr>\n".format(i))
    f.write("</table>\n</body>\n</html>")

# write to numbers.html
with open("numbers.html"") as f:
    print(f.read())
    
