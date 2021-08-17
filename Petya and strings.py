list =[]
for num in range(0,2):
    word =  input()
    wordl = word.lower()
    list.append(wordl)

if list[0] > list[1]:
    print("1")
elif list[0] == list[1]:
    print("0")
elif list[0] < list[1]:
    print("-1")
