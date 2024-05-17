'''CYPHER_PROBLEM_2

The logic behind it is:-
To encrypt the given text problem using Atbash cypher, we replace each alphabet with its reverse alphabet counterpart.
FOR EXAMPLE: a becomes z, b becomes y ans so on.

THE CODE IS GIVEN BELOW TO DECRYPT THE MESSAGE:'''

print("Enter the code to be decrypted = ")
lines = []
while True:
    line = input()
    if line:
        lines.append(line)
    else:
        break
b = '\n'.join(lines)
l1=[]
l2=[]
for i in b:
    l1.append(ord(i))
for x in l1:
    if 64<x<91:
        x=90+65-x
        l2.append(x)
    elif 96<x<123:
        x =97+122-x
        l2.append(x)
    else:
        l2.append(x)
for c in l2:
    print(chr(c),end="")

'''ANSWER IS:-
Love and a Question
A Stranger came to the door at eve, And he spoke the bridegroom fair. He bore a green-white stick in his hand, And, for all burden, care.
He asked with the eyes more than the lips For a shelter for the night.
And he turned and looked at the road afar Without a window light.
The bridegroom came forth into the porch With. 'Let us look at the sky.
And question what of the night to be, Stranger, you and I.
The woodbine leaves littered the yard.
The woodbine berries were blue, Autumn, yes, winter was in the wind; 'Stranger, I wish I knew.'
Within, the bride in the dusk alone Bent over the open fire, Her face rose-red with the glowing coal And the thought of the heart's desire. The bridegroom looked at the weary road, Yet saw but her within, And wished her heart in a case of gold And pinned with a silver pin.
The bridegroom thought it little to give A dole of bread, a purse, A heartfelt prayer for the poor of God, Or for the rich a curse; But whether or not a man was asked To mar the love of two By harboring woe in the bridal house, The bridegroom wished he knew.
-BY ROBERT FROST'''