# Code to Encrypt or Decrypt text using Atbash Cipher Algorithm.

# By Aryan Gupta , Cse[A.I] , 2nd Sem , Roll no.-11


text1 = input("Enter text to Encrypt or Decrypt:-").upper()

text2 = ""
for letter in text1:
    ascii = ord(letter)
    if ascii>=65 and ascii <=90:
        position = ascii - 65
        newPosition = 25 - position
        
        newAscii = newPosition + 65
        newLetter = chr(newAscii)
    
    else:
        newLetter = letter
    text2 = text2 + newLetter
    
print(text2.capitalize())
        

# DECRYPTED TEXT:-
'''
Love and a Question

A Stranger came to the door at eve,
And he spoke the bridegroom fair.
He bore a green-white stick in his hand,
And, for all burden, care.
He asked with the eyes more than the lips
For a shelter for the night,
And he turned and looked at the road afar
Without a window light.
The bridegroom came forth into the porch
With, 'Let us look at the sky,
And question what of the night to be,
Stranger, you and I.'
The woodbine leaves littered the yard,
The woodbine berries were blue,
Autumn, yes, winter was in the wind;
'Stranger, I wish I knew.'
Within, the bride in the dusk alone
Bent over the open fire,
Her face rose-red with the glowing coal
And the thought of the heart's desire.
The bridegroom looked at the weary road,
Yet saw but her within,
And wished her heart in a case of gold
And pinned with a silver pin.
The bridegroom thought it little to give
A dole of bread, a purse,
A heartfelt prayer for the poor of God,
Or for the rich a curse;
But whether or not a man was asked
To mar the love of two
By harboring woe in the bridal house,
The bridegroom wished he knew.

-BY ROBERT FROST

'''