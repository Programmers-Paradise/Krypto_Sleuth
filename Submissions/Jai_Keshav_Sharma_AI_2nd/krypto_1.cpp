/*

Jai Keshav Sharma
AI
2nd Sem

*/

#include <bits/stdc++.h>
using namespace std;

//to convert text into uppercase
string toUpperCase(const string &str)
{
    string result(str);
    transform(result.begin(), result.end(), result.begin(), ::toupper);
    return result;
}

//decryption function
string decrypt(string str, int s)
{
    string result;

    for (int i = 0; i < str.length(); i++)
    {

        if (isupper(str[i]))
        {
            result += char(int(str[i] - s + 'A') % 26 + 'A');
        }

        if (str[i] == ' ')
        {
            result += ' ';
        }
    }

    return result;
}

int main()
{

    string s = R"(Ocz Mvqzi
- WT ZYBVM VGGVI KJZ
 Jixz pkji v hdyidbco ymzvmt, rcdgz D kjiyzmzy, rzvf viy rzvmt, Jqzm hvit v lpvdio viy xpmdjpn qjgphz ja ajmbjoozi gjmz— Rcdgz D ijyyzy, izvmgt ivkkdib, npyyzigt oczmz xvhz v ovkkdib, Vn ja njhz jiz bziogt mvkkdib, mvkkdib vo ht xcvhwzm yjjm. "Odn njhz qdndojm," D hpoozmzy, "ovkkdib vo ht xcvhwzm yjjm― Jigt ocdn viy ijocdib hjmz.”
Vc, ydnodixogt D mzhzhwzm do rvn di ocz wgzvf Yzxzhwzm; Viy zvxc nzkvmvoz ytdib zhwzm rmjpbco don bcjno pkji ocz agjjm. Zvbzmgt D rdnczy ocz hjmmjr;—qvdigt D cvy njpbco oj wjmmjr Amjh ht wjjfn npmxzvnz ja njm- mjrnjmmjr ajm ocz gjno Gzijmz— Ajm ocz mvmz viy mvydvio hvdyzi rcjh ocz vibzgn ivhz Gzijmz— Ivhzgznn czmz ajm zqzmhjmz.)";

   

    
    //getting the shift value by bruteforcing
    // for (int i = 1; i <= 26; i++)
    // {
    //  cout << decrypt(s, i) << endl;
    // }

    int shift = 21;
    cout << decrypt(toUpperCase(s), shift);

    return 0;
}



/* 
        DECRYPTED TEXT -->
        THE RAVEN BY EDGAR ALLAN POE ONCE UPON A MIDNIGHT DREARY WHILE I PONDERED WEAK AND WEARY OVER MANY A QUAINT AND CURIOUS VOLUME OF FORGOTTEN LORE WHILE I NODDED NEARLY NAPPING SUDDENLY THERE CAME A TAPPING AS OF SOME ONE GENTLY RAPPING RAPPING AT MY CHAMBER DOOR TIS SOME VISITOR I MUTTERED TAPPING AT MY CHAMBER DOOR ONLY THIS AND NOTHING MOREAH DISTINCTLY I REMEMBER IT WAS IN THE BLEAK DECEMBER AND EACH SEPARATE DYING EMBER WROUGHT ITS GHOST UPON THE FLOOR EAGERLY I WISHED THE MORROWVAINLY I HAD SOUGHT TO BORROW FROM MY BOOKS SURCEASE OF SOR ROWSORROW FOR THE LOST LENORE FOR THE RARE AND RADIANT MAIDEN WHOM THE ANGELS NAME LENORE NAMELESS HERE FOR EVERMORE
*/
