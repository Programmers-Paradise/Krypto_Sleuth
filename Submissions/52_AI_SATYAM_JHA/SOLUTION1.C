//THE KEY IS 21 HERE,SO FOR DECRYPTION WE WILL USE -21
/* NAME- SATYAM JHA
  BRANCH-AI
  SEMESTER-2*/
#include <stdio.h>
#include <string.h>

int main() {
    printf("Enter the word to be deciphered = \n");
    char lines[1000];
    fgets(lines, sizeof(lines), stdin);

    int shift;
    printf("Enter shift value= ");
    scanf("%d", &shift);

    int l1[1000];
    int l2[1000];

    for (int i = 0; i < strlen(lines); i++) {
        l1[i] = (int)lines[i];
    }

    for (int i = 0; i < strlen(lines); i++) {
        int x = l1[i];
        if (64 < x && x < 91) {
            if (x + shift > 90) {
                x = x + shift - 26;
                l2[i] = x;
            } else if (x + shift < 65) {
                x = x + shift + 26;
                l2[i] = x;
            } else {
                l2[i] = x + shift;
            }
        } else if (96 < x && x < 123) {
            if (x + shift > 122) {
                x = x + shift - 26;
                l2[i] = x;
            } else if (x + shift < 97) {
                x = x + shift + 26;
                l2[i] = x;
            } else {
                l2[i] = x + shift;
            }
        } else {
            l2[i] = x;
        }
    }

    for (int i = 0; i < strlen(lines); i++) {
        printf("%c", (char)l2[i]);
    }

    return 0;
}
// DECRYPTED TEXT
/*The Raven
-BY EDGAR ALLAN POE
Once upon a midnight dreary, while I pondered, weak and weary, Over many a
quaint and curious volume of forgotten lore— While I nodded, nearly napping,
suddenly there came a tapping, As of some one gently rapping, rapping at my
chamber door. “’Tis some visitor,” I muttered, “tapping at my chamber
door— Only this and nothing more.”
Ah, distinctly I remember it was in the bleak December; And each
separate dying ember wrought its ghost upon the floor. Eagerly I wished
the morrow;—vainly I had sought to borrow From my books surcease of sorrow—sorrow for the lost Lenore— For the rare and radiant maiden whom
the angels name Lenore— Nameless here for evermore*/
