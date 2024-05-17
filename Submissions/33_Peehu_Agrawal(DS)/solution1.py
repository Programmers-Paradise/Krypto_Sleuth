'''We get key value as 21.
As it can be seen that His2ry has 2 and Evo1ution has 1.
The code is given below:-'''


print("Enter the word to be deciphered:")
lines = []
while True:
    line = input()
    if line:
        lines.append(line)
    else:
        break
cipher_text = '\n'.join(lines)

shift = int(input("Enter the shift value: "))

deciphered_text = ""
for char in cipher_text:
    if char.isalpha():  
        if char.islower():
            decrypted_char = chr(((ord(char) - 97 - shift) % 26) + 97)
        else:
            decrypted_char = chr(((ord(char) - 65 - shift) % 26) + 65)
        deciphered_text += decrypted_char
    else:
        deciphered_text += char

print("Deciphered text:")
print(deciphered_text)


'''ANSWER:-
The Raven
-BY EDGAR ALLAN POE
Once upon a midnight dreary, while I pondered, weak and weary, Over many a
quaint and curious volume of forgotten lore— While I nodded, nearly napping,
suddenly there came a tapping, As of some one gently rapping, rapping at my
chamber door. “’Tis some visitor,” I muttered, “tapping at my chamber
door— Only this and nothing more.”
Ah, distinctly I remember it was in the bleak December; And each
separate dying ember wrought its ghost upon the floor. Eagerly I wished
the morrow;—vainly I had sought to borrow From my books surcease of sorrow—sorrow for the lost Lenore— For the rare and radiant maiden whom
the angels name Lenore— Nameless here for evermore.'''