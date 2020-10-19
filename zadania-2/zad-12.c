#include <stdio.h>

int main() {

    printf("Podaj jeden znak: ");
    char znak_char;
    scanf("%c", &znak_char);
    
    int znak_int = (int)znak_char;
    
    int ascii_A = 65,
        ascii_Z = 90,
        ascii_a = 97,
        ascii_z = 122;
    
    if((ascii_A<=znak_int && znak_int<=ascii_Z) || (ascii_a<=znak_int && znak_int<=ascii_z))
    {
        printf("wczytany znak jest litera \n");

        switch(znak_char) {
        case 'q' : printf("na klawiaturze po prawej stronie od danego znaku znajduje sie klawisz W."); break;
        case 'Q' : printf("na klawiaturze po prawej stronie od danego znaku znajduje sie klawisz W."); break;
        case 'w' : printf("na klawiaturze po prawej stronie od danego znaku znajduje sie klawisz E."); break;
        case 'W' : printf("na klawiaturze po prawej stronie od danego znaku znajduje sie klawisz E"); break;
        case 'e' : printf("na klawiaturze po prawej stronie od danego znaku znajduje sie klawisz R."); break;
        case 'E' : printf("na klawiaturze po prawej stronie od danego znaku znajduje sie klawisz R."); break;
        case 'r' : printf("na klawiaturze po prawej stronie od danego znaku znajduje sie klawisz T."); break;
        case 'R' : printf("na klawiaturze po prawej stronie od danego znaku znajduje sie klawisz T."); break;
        case 't' : printf("na klawiaturze po prawej stronie od danego znaku znajduje sie klawisz Y."); break;
        case 'T' : printf("na klawiaturze po prawej stronie od danego znaku znajduje sie klawisz Y."); break;
        case 'y' : printf("na klawiaturze po prawej stronie od danego znaku znajduje sie klawisz U."); break;
        case 'Y' : printf("na klawiaturze po prawej stronie od danego znaku znajduje sie klawisz U."); break;
        case 'u' : printf("na klawiaturze po prawej stronie od danego znaku znajduje sie klawisz I."); break;
        case 'U' : printf("na klawiaturze po prawej stronie od danego znaku znajduje sie klawisz I."); break;
        case 'i' : printf("na klawiaturze po prawej stronie od danego znaku znajduje sie klawisz O."); break;
        case 'I' : printf("na klawiaturze po prawej stronie od danego znaku znajduje sie klawisz O."); break;
        case 'o' : printf("na klawiaturze po prawej stronie od danego znaku znajduje sie klawisz P."); break;
        case 'O' : printf("na klawiaturze po prawej stronie od danego znaku znajduje sie klawisz P."); break;
        case 'p' : printf("na klawiaturze po prawej stronie od danego znaku znajduje sie klawisz [."); break;
        case 'P' : printf("na klawiaturze po prawej stronie od danego znaku znajduje sie klawisz [."); break;
        case 'a' : printf("na klawiaturze po prawej stronie od danego znaku znajduje sie klawisz S."); break;
        case 'A' : printf("na klawiaturze po prawej stronie od danego znaku znajduje sie klawisz S."); break;
        case 's' : printf("na klawiaturze po prawej stronie od danego znaku znajduje sie klawisz D."); break;
        case 'S' : printf("na klawiaturze po prawej stronie od danego znaku znajduje sie klawisz D."); break;
        case 'd' : printf("na klawiaturze po prawej stronie od danego znaku znajduje sie klawisz F."); break;
        case 'D' : printf("na klawiaturze po prawej stronie od danego znaku znajduje sie klawisz F."); break;
        case 'f' : printf("na klawiaturze po prawej stronie od danego znaku znajduje sie klawisz G."); break;
        case 'F' : printf("na klawiaturze po prawej stronie od danego znaku znajduje sie klawisz G."); break;
        case 'g' : printf("na klawiaturze po prawej stronie od danego znaku znajduje sie klawisz H."); break;
        case 'G' : printf("na klawiaturze po prawej stronie od danego znaku znajduje sie klawisz H."); break;
        case 'h' : printf("na klawiaturze po prawej stronie od danego znaku znajduje sie klawisz J."); break;
        case 'H' : printf("na klawiaturze po prawej stronie od danego znaku znajduje sie klawisz J."); break;
        case 'j' : printf("na klawiaturze po prawej stronie od danego znaku znajduje sie klawisz K."); break;
        case 'J' : printf("na klawiaturze po prawej stronie od danego znaku znajduje sie klawisz K."); break;
        case 'k' : printf("na klawiaturze po prawej stronie od danego znaku znajduje sie klawisz L."); break;
        case 'K' : printf("na klawiaturze po prawej stronie od danego znaku znajduje sie klawisz L."); break;
        case 'l' : printf("na klawiaturze po prawej stronie od danego znaku znajduje sie klawisz ;."); break;
        case 'L' : printf("na klawiaturze po prawej stronie od danego znaku znajduje sie klawisz ;."); break;
        case 'z' : printf("na klawiaturze po prawej stronie od danego znaku znajduje sie klawisz X."); break;
        case 'Z' : printf("na klawiaturze po prawej stronie od danego znaku znajduje sie klawisz X."); break;
        case 'x' : printf("na klawiaturze po prawej stronie od danego znaku znajduje sie klawisz C."); break;
        case 'X' : printf("na klawiaturze po prawej stronie od danego znaku znajduje sie klawisz C."); break;
        case 'c' : printf("na klawiaturze po prawej stronie od danego znaku znajduje sie klawisz V."); break;
        case 'C' : printf("na klawiaturze po prawej stronie od danego znaku znajduje sie klawisz V."); break;
        case 'v' : printf("na klawiaturze po prawej stronie od danego znaku znajduje sie klawisz B."); break;
        case 'V' : printf("na klawiaturze po prawej stronie od danego znaku znajduje sie klawisz B."); break;
        case 'b' : printf("na klawiaturze po prawej stronie od danego znaku znajduje sie klawisz N."); break;
        case 'B' : printf("na klawiaturze po prawej stronie od danego znaku znajduje sie klawisz N."); break;
        case 'n' : printf("na klawiaturze po prawej stronie od danego znaku znajduje sie klawisz M."); break;
        case 'N' : printf("na klawiaturze po prawej stronie od danego znaku znajduje sie klawisz M."); break;
        case 'm' : printf("na klawiaturze po prawej stronie od danego znaku znajduje sie klawisz ,."); break;
        case 'M' : printf("na klawiaturze po prawej stronie od danego znaku znajduje sie klawisz ,."); break;


        
      }
    }
    else
    {
        printf("wczytany znak nie jest literą");
    }

  return 0;
}