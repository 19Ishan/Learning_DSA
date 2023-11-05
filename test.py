Name = "PythoN3.1"
R = ""
for x in range(len(Name)):
    if Name[x].isupper():
        R = R + Name[x].lower()
    elif Name[x].islower():
        R = R + Name[x].upper()
    elif Name[x].isdigit():
        R = R + Name[x - 1]
    else:
        R = R + "0"

print(R)