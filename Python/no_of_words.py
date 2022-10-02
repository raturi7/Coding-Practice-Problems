def wordcount(string):
    return (len(string.split()))


string = input("Enter a String > ")
ans = wordcount(string)
print(f"Number of words in String are {ans}")
