/*
-> JAI KESHAV SHARMA
-> AI
-> 2ND SEM
-> CODE: ATBASH CYPHER DECRYPTION
*/

#include <bits/stdc++.h>
using namespace std;

// decryption function
string decrypt(string s)
{
    string result = "";
    for (char letter : s)
    {
        if (letter >= 'a' && letter <= 'z')
        {
            result += 'z' - (letter - 'a');
        }
        else if (letter >= 'A' && letter <= 'Z')
        {
            result += 'Z' - (letter - 'A');
        }
        else
        {
            result += letter;
        }
    }

    return result;
} // decryption function

// driver code
int main()
{
    string cypherText = R"(Olev zmw z Jfvhgrlm
Z Hgizmtvi xznv gl gsv wlli zg vev,
Zmw sv hklpv gsv yirwvtilln uzri.
Sv yliv z tivvm-dsrgv hgrxp rm srh szmw,
Zmw, uli zoo yfiwvm, xziv.
Sv zhpvw drgs gsv vbvh nliv gszm gsv orkh
Uli z hsvogvi uli gsv mrtsg,
Zmw sv gfimvw zmw ollpvw zg gsv ilzw zuzi
Drgslfg z drmwld ortsg.
Gsv yirwvtilln xznv uligs rmgl gsv klixs
Drgs, 'Ovg fh ollp zg gsv hpb,
Zmw jfvhgrlm dszg lu gsv mrtsg gl yv,
Hgizmtvi, blf zmw R.'
Gsv dllwyrmv ovzevh orggvivw gsv bziw,
Gsv dllwyrmv yviirvh dviv yofv,
Zfgfnm, bvh, drmgvi dzh rm gsv drmw;
'Hgizmtvi, R drhs R pmvd.'
Drgsrm, gsv yirwv rm gsv wfhp zolmv
Yvmg levi gsv lkvm uriv,
Svi uzxv ilhv-ivw drgs gsv toldrmt xlzo
Zmw gsv gslftsg lu gsv svzig'h wvhriv.
Gsv yirwvtilln ollpvw zg gsv dvzib ilzw,
Bvg hzd yfg svi drgsrm,
Zmw drhsvw svi svzig rm z xzhv lu tlow
Zmw krmmvw drgs z hroevi krm.
Gsv yirwvtilln gslftsg rg orggov gl trev
Z wlov lu yivzw, z kfihv,
Z svziguvog kizbvi uli gsv klli lu Tlw,
Li uli gsv irxs z xfihv;
Yfg dsvgsvi li mlg z nzm dzh zhpvw
Gl nzi gsv olev lu gdl
Yb sziylirmt dlv rm gsv yirwzo slfhv,
Gsv yirwvtilln drhsvw sv pmvd.
-YB ILYVIG UILHG
)";
    cout << decrypt(cypherText);

    return 0;
}



// DECRYPTED TEXT -->
/*
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
*/