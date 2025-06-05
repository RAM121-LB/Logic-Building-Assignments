///////////////////////////////////////////////////////
//
//  File name :     A23Question1.c
//  Descreption :   A program which display ASCII Table.
//  Author :        Ram Madhukar Thakare
//  Date :          02/06/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>

void DisplayASCII()
{
    int iCnt = 0;

    for(iCnt = 0; iCnt <= 255; iCnt++)
    {
        printf("Decimal : %d\tHexadecimal : %x\tOctal : %o\tCharacter : %c\t",iCnt,iCnt,iCnt,iCnt);
        printf("\n");
    }
    
}

int main()
{
    DisplayASCII();
    
    return 0;
}

/*
Output : 
Decimal : 0     Hexadecimal : 0 Octal : 0       Character :
Decimal : 1     Hexadecimal : 1 Octal : 1       Character : ☺
Decimal : 2     Hexadecimal : 2 Octal : 2       Character : ☻
Decimal : 3     Hexadecimal : 3 Octal : 3       Character : ♥
Decimal : 4     Hexadecimal : 4 Octal : 4       Character : ♦
Decimal : 5     Hexadecimal : 5 Octal : 5       Character : ♣
Decimal : 6     Hexadecimal : 6 Octal : 6       Character : ♠
Decimal : 7     Hexadecimal : 7 Octal : 7       Character :
Decimal : 8     Hexadecimal : 8 Octal : 10      Character :
Decimal : 9     Hexadecimal : 9 Octal : 11      Character :
Decimal : 10    Hexadecimal : a Octal : 12      Character :

Decimal : 11    Hexadecimal : b Octal : 13      Character : ♂
Decimal : 12    Hexadecimal : c Octal : 14      Character : ♀
        : 13    Hexadecimal : d Octal : 15      Character :
Decimal : 14    Hexadecimal : e Octal : 16      Character : ♫
Decimal : 15    Hexadecimal : f Octal : 17      Character : ☼
Decimal : 16    Hexadecimal : 10        Octal : 20      Character : ►
Decimal : 17    Hexadecimal : 11        Octal : 21      Character : ◄
Decimal : 18    Hexadecimal : 12        Octal : 22      Character : ↕
Decimal : 19    Hexadecimal : 13        Octal : 23      Character : ‼
Decimal : 20    Hexadecimal : 14        Octal : 24      Character : ¶
Decimal : 21    Hexadecimal : 15        Octal : 25      Character : §
Decimal : 22    Hexadecimal : 16        Octal : 26      Character : ▬
Decimal : 23    Hexadecimal : 17        Octal : 27      Character : ↨
Decimal : 24    Hexadecimal : 18        Octal : 30      Character : ↑
Decimal : 25    Hexadecimal : 19        Octal : 31      Character : ↓
Decimal : 26    Hexadecimal : 1a        Octal : 32      Character : →
Decimal : 27    Hexadecimal : 1b        Octal : 33      Character : ←
Decimal : 28    Hexadecimal : 1c        Octal : 34      Character : ∟
Decimal : 29    Hexadecimal : 1d        Octal : 35      Character : ↔
Decimal : 30    Hexadecimal : 1e        Octal : 36      Character : ▲
Decimal : 31    Hexadecimal : 1f        Octal : 37      Character : ▼
Decimal : 32    Hexadecimal : 20        Octal : 40      Character :
Decimal : 33    Hexadecimal : 21        Octal : 41      Character : !
Decimal : 34    Hexadecimal : 22        Octal : 42      Character : "
Decimal : 35    Hexadecimal : 23        Octal : 43      Character : #
Decimal : 36    Hexadecimal : 24        Octal : 44      Character : $
Decimal : 37    Hexadecimal : 25        Octal : 45      Character : %
Decimal : 38    Hexadecimal : 26        Octal : 46      Character : &
Decimal : 39    Hexadecimal : 27        Octal : 47      Character : '
Decimal : 40    Hexadecimal : 28        Octal : 50      Character : (
Decimal : 41    Hexadecimal : 29        Octal : 51      Character : )
Decimal : 42    Hexadecimal : 2a        Octal : 52      Character : *
Decimal : 43    Hexadecimal : 2b        Octal : 53      Character : +
Decimal : 44    Hexadecimal : 2c        Octal : 54      Character : ,
Decimal : 45    Hexadecimal : 2d        Octal : 55      Character : -
Decimal : 46    Hexadecimal : 2e        Octal : 56      Character : .
Decimal : 47    Hexadecimal : 2f        Octal : 57      Character : /
Decimal : 48    Hexadecimal : 30        Octal : 60      Character : 0
Decimal : 49    Hexadecimal : 31        Octal : 61      Character : 1
Decimal : 50    Hexadecimal : 32        Octal : 62      Character : 2
Decimal : 51    Hexadecimal : 33        Octal : 63      Character : 3
Decimal : 52    Hexadecimal : 34        Octal : 64      Character : 4
Decimal : 53    Hexadecimal : 35        Octal : 65      Character : 5
Decimal : 54    Hexadecimal : 36        Octal : 66      Character : 6
Decimal : 55    Hexadecimal : 37        Octal : 67      Character : 7
Decimal : 56    Hexadecimal : 38        Octal : 70      Character : 8
Decimal : 57    Hexadecimal : 39        Octal : 71      Character : 9
Decimal : 58    Hexadecimal : 3a        Octal : 72      Character : :
Decimal : 59    Hexadecimal : 3b        Octal : 73      Character : ;
Decimal : 60    Hexadecimal : 3c        Octal : 74      Character : <
Decimal : 61    Hexadecimal : 3d        Octal : 75      Character : =
Decimal : 62    Hexadecimal : 3e        Octal : 76      Character : >
Decimal : 63    Hexadecimal : 3f        Octal : 77      Character : ?
Decimal : 64    Hexadecimal : 40        Octal : 100     Character : @
Decimal : 65    Hexadecimal : 41        Octal : 101     Character : A
Decimal : 66    Hexadecimal : 42        Octal : 102     Character : B
Decimal : 67    Hexadecimal : 43        Octal : 103     Character : C
Decimal : 68    Hexadecimal : 44        Octal : 104     Character : D
Decimal : 69    Hexadecimal : 45        Octal : 105     Character : E
Decimal : 70    Hexadecimal : 46        Octal : 106     Character : F
Decimal : 71    Hexadecimal : 47        Octal : 107     Character : G
Decimal : 72    Hexadecimal : 48        Octal : 110     Character : H
Decimal : 73    Hexadecimal : 49        Octal : 111     Character : I
Decimal : 74    Hexadecimal : 4a        Octal : 112     Character : J
Decimal : 75    Hexadecimal : 4b        Octal : 113     Character : K
Decimal : 76    Hexadecimal : 4c        Octal : 114     Character : L
Decimal : 77    Hexadecimal : 4d        Octal : 115     Character : M
Decimal : 78    Hexadecimal : 4e        Octal : 116     Character : N
Decimal : 79    Hexadecimal : 4f        Octal : 117     Character : O
Decimal : 80    Hexadecimal : 50        Octal : 120     Character : P
Decimal : 81    Hexadecimal : 51        Octal : 121     Character : Q
Decimal : 82    Hexadecimal : 52        Octal : 122     Character : R
Decimal : 83    Hexadecimal : 53        Octal : 123     Character : S
Decimal : 84    Hexadecimal : 54        Octal : 124     Character : T
Decimal : 85    Hexadecimal : 55        Octal : 125     Character : U
Decimal : 86    Hexadecimal : 56        Octal : 126     Character : V
Decimal : 87    Hexadecimal : 57        Octal : 127     Character : W
Decimal : 88    Hexadecimal : 58        Octal : 130     Character : X
Decimal : 89    Hexadecimal : 59        Octal : 131     Character : Y
Decimal : 90    Hexadecimal : 5a        Octal : 132     Character : Z
Decimal : 91    Hexadecimal : 5b        Octal : 133     Character : [
Decimal : 92    Hexadecimal : 5c        Octal : 134     Character : \
Decimal : 93    Hexadecimal : 5d        Octal : 135     Character : ]
Decimal : 94    Hexadecimal : 5e        Octal : 136     Character : ^
Decimal : 95    Hexadecimal : 5f        Octal : 137     Character : _
Decimal : 96    Hexadecimal : 60        Octal : 140     Character : `
Decimal : 97    Hexadecimal : 61        Octal : 141     Character : a
Decimal : 98    Hexadecimal : 62        Octal : 142     Character : b
Decimal : 99    Hexadecimal : 63        Octal : 143     Character : c
Decimal : 100   Hexadecimal : 64        Octal : 144     Character : d
Decimal : 101   Hexadecimal : 65        Octal : 145     Character : e
Decimal : 102   Hexadecimal : 66        Octal : 146     Character : f
Decimal : 103   Hexadecimal : 67        Octal : 147     Character : g
Decimal : 104   Hexadecimal : 68        Octal : 150     Character : h
Decimal : 105   Hexadecimal : 69        Octal : 151     Character : i
Decimal : 106   Hexadecimal : 6a        Octal : 152     Character : j
Decimal : 107   Hexadecimal : 6b        Octal : 153     Character : k
Decimal : 108   Hexadecimal : 6c        Octal : 154     Character : l
Decimal : 109   Hexadecimal : 6d        Octal : 155     Character : m
Decimal : 110   Hexadecimal : 6e        Octal : 156     Character : n
Decimal : 111   Hexadecimal : 6f        Octal : 157     Character : o
Decimal : 112   Hexadecimal : 70        Octal : 160     Character : p
Decimal : 113   Hexadecimal : 71        Octal : 161     Character : q
Decimal : 114   Hexadecimal : 72        Octal : 162     Character : r
Decimal : 115   Hexadecimal : 73        Octal : 163     Character : s
Decimal : 116   Hexadecimal : 74        Octal : 164     Character : t
Decimal : 117   Hexadecimal : 75        Octal : 165     Character : u
Decimal : 118   Hexadecimal : 76        Octal : 166     Character : v
Decimal : 119   Hexadecimal : 77        Octal : 167     Character : w
Decimal : 120   Hexadecimal : 78        Octal : 170     Character : x
Decimal : 121   Hexadecimal : 79        Octal : 171     Character : y
Decimal : 122   Hexadecimal : 7a        Octal : 172     Character : z
Decimal : 123   Hexadecimal : 7b        Octal : 173     Character : {
Decimal : 124   Hexadecimal : 7c        Octal : 174     Character : |
Decimal : 125   Hexadecimal : 7d        Octal : 175     Character : }
Decimal : 126   Hexadecimal : 7e        Octal : 176     Character : ~
Decimal : 127   Hexadecimal : 7f        Octal : 177     Character : ⌂
Decimal : 128   Hexadecimal : 80        Octal : 200     Character : Ç
Decimal : 129   Hexadecimal : 81        Octal : 201     Character : ü
Decimal : 130   Hexadecimal : 82        Octal : 202     Character : é
Decimal : 131   Hexadecimal : 83        Octal : 203     Character : â
Decimal : 132   Hexadecimal : 84        Octal : 204     Character : ä
Decimal : 133   Hexadecimal : 85        Octal : 205     Character : à
Decimal : 134   Hexadecimal : 86        Octal : 206     Character : å
Decimal : 135   Hexadecimal : 87        Octal : 207     Character : ç
Decimal : 136   Hexadecimal : 88        Octal : 210     Character : ê
Decimal : 137   Hexadecimal : 89        Octal : 211     Character : ë
Decimal : 138   Hexadecimal : 8a        Octal : 212     Character : è
Decimal : 139   Hexadecimal : 8b        Octal : 213     Character : ï
Decimal : 140   Hexadecimal : 8c        Octal : 214     Character : î
Decimal : 141   Hexadecimal : 8d        Octal : 215     Character : ì
Decimal : 142   Hexadecimal : 8e        Octal : 216     Character : Ä
Decimal : 143   Hexadecimal : 8f        Octal : 217     Character : Å
Decimal : 144   Hexadecimal : 90        Octal : 220     Character : É
Decimal : 145   Hexadecimal : 91        Octal : 221     Character : æ
Decimal : 146   Hexadecimal : 92        Octal : 222     Character : Æ
Decimal : 147   Hexadecimal : 93        Octal : 223     Character : ô
Decimal : 148   Hexadecimal : 94        Octal : 224     Character : ö
Decimal : 149   Hexadecimal : 95        Octal : 225     Character : ò
Decimal : 150   Hexadecimal : 96        Octal : 226     Character : û
Decimal : 151   Hexadecimal : 97        Octal : 227     Character : ù
Decimal : 152   Hexadecimal : 98        Octal : 230     Character : ÿ
Decimal : 153   Hexadecimal : 99        Octal : 231     Character : Ö
Decimal : 154   Hexadecimal : 9a        Octal : 232     Character : Ü
Decimal : 155   Hexadecimal : 9b        Octal : 233     Character : ¢
Decimal : 156   Hexadecimal : 9c        Octal : 234     Character : £
Decimal : 157   Hexadecimal : 9d        Octal : 235     Character : ¥
Decimal : 158   Hexadecimal : 9e        Octal : 236     Character : ₧
Decimal : 159   Hexadecimal : 9f        Octal : 237     Character : ƒ
Decimal : 160   Hexadecimal : a0        Octal : 240     Character : á
Decimal : 161   Hexadecimal : a1        Octal : 241     Character : í
Decimal : 162   Hexadecimal : a2        Octal : 242     Character : ó
Decimal : 163   Hexadecimal : a3        Octal : 243     Character : ú
Decimal : 164   Hexadecimal : a4        Octal : 244     Character : ñ
Decimal : 165   Hexadecimal : a5        Octal : 245     Character : Ñ
Decimal : 166   Hexadecimal : a6        Octal : 246     Character : ª
Decimal : 167   Hexadecimal : a7        Octal : 247     Character : º
Decimal : 168   Hexadecimal : a8        Octal : 250     Character : ¿
Decimal : 169   Hexadecimal : a9        Octal : 251     Character : ⌐
Decimal : 170   Hexadecimal : aa        Octal : 252     Character : ¬
Decimal : 171   Hexadecimal : ab        Octal : 253     Character : ½
Decimal : 172   Hexadecimal : ac        Octal : 254     Character : ¼
Decimal : 173   Hexadecimal : ad        Octal : 255     Character : ¡
Decimal : 174   Hexadecimal : ae        Octal : 256     Character : «
Decimal : 175   Hexadecimal : af        Octal : 257     Character : »
Decimal : 176   Hexadecimal : b0        Octal : 260     Character : ░
Decimal : 177   Hexadecimal : b1        Octal : 261     Character : ▒
Decimal : 178   Hexadecimal : b2        Octal : 262     Character : ▓
Decimal : 179   Hexadecimal : b3        Octal : 263     Character : │
Decimal : 180   Hexadecimal : b4        Octal : 264     Character : ┤
Decimal : 181   Hexadecimal : b5        Octal : 265     Character : ╡
Decimal : 182   Hexadecimal : b6        Octal : 266     Character : ╢
Decimal : 183   Hexadecimal : b7        Octal : 267     Character : ╖
Decimal : 184   Hexadecimal : b8        Octal : 270     Character : ╕
Decimal : 185   Hexadecimal : b9        Octal : 271     Character : ╣
Decimal : 186   Hexadecimal : ba        Octal : 272     Character : ║
Decimal : 187   Hexadecimal : bb        Octal : 273     Character : ╗
Decimal : 188   Hexadecimal : bc        Octal : 274     Character : ╝
Decimal : 189   Hexadecimal : bd        Octal : 275     Character : ╜
Decimal : 190   Hexadecimal : be        Octal : 276     Character : ╛
Decimal : 191   Hexadecimal : bf        Octal : 277     Character : ┐
Decimal : 192   Hexadecimal : c0        Octal : 300     Character : └
Decimal : 193   Hexadecimal : c1        Octal : 301     Character : ┴
Decimal : 194   Hexadecimal : c2        Octal : 302     Character : ┬
Decimal : 195   Hexadecimal : c3        Octal : 303     Character : ├
Decimal : 196   Hexadecimal : c4        Octal : 304     Character : ─
Decimal : 197   Hexadecimal : c5        Octal : 305     Character : ┼
Decimal : 198   Hexadecimal : c6        Octal : 306     Character : ╞
Decimal : 199   Hexadecimal : c7        Octal : 307     Character : ╟
Decimal : 200   Hexadecimal : c8        Octal : 310     Character : ╚
Decimal : 201   Hexadecimal : c9        Octal : 311     Character : ╔
Decimal : 202   Hexadecimal : ca        Octal : 312     Character : ╩
Decimal : 203   Hexadecimal : cb        Octal : 313     Character : ╦
Decimal : 204   Hexadecimal : cc        Octal : 314     Character : ╠
Decimal : 205   Hexadecimal : cd        Octal : 315     Character : ═
Decimal : 206   Hexadecimal : ce        Octal : 316     Character : ╬
Decimal : 207   Hexadecimal : cf        Octal : 317     Character : ╧
Decimal : 208   Hexadecimal : d0        Octal : 320     Character : ╨
Decimal : 209   Hexadecimal : d1        Octal : 321     Character : ╤
Decimal : 210   Hexadecimal : d2        Octal : 322     Character : ╥
Decimal : 211   Hexadecimal : d3        Octal : 323     Character : ╙
Decimal : 212   Hexadecimal : d4        Octal : 324     Character : ╘
Decimal : 213   Hexadecimal : d5        Octal : 325     Character : ╒
Decimal : 214   Hexadecimal : d6        Octal : 326     Character : ╓
Decimal : 215   Hexadecimal : d7        Octal : 327     Character : ╫
Decimal : 216   Hexadecimal : d8        Octal : 330     Character : ╪
Decimal : 217   Hexadecimal : d9        Octal : 331     Character : ┘
Decimal : 218   Hexadecimal : da        Octal : 332     Character : ┌
Decimal : 219   Hexadecimal : db        Octal : 333     Character : █
Decimal : 220   Hexadecimal : dc        Octal : 334     Character : ▄
Decimal : 221   Hexadecimal : dd        Octal : 335     Character : ▌
Decimal : 222   Hexadecimal : de        Octal : 336     Character : ▐
Decimal : 223   Hexadecimal : df        Octal : 337     Character : ▀
Decimal : 224   Hexadecimal : e0        Octal : 340     Character : α
Decimal : 225   Hexadecimal : e1        Octal : 341     Character : ß
Decimal : 226   Hexadecimal : e2        Octal : 342     Character : Γ
Decimal : 227   Hexadecimal : e3        Octal : 343     Character : π
Decimal : 228   Hexadecimal : e4        Octal : 344     Character : Σ
Decimal : 229   Hexadecimal : e5        Octal : 345     Character : σ
Decimal : 230   Hexadecimal : e6        Octal : 346     Character : µ
Decimal : 231   Hexadecimal : e7        Octal : 347     Character : τ
Decimal : 232   Hexadecimal : e8        Octal : 350     Character : Φ
Decimal : 233   Hexadecimal : e9        Octal : 351     Character : Θ
Decimal : 234   Hexadecimal : ea        Octal : 352     Character : Ω
Decimal : 235   Hexadecimal : eb        Octal : 353     Character : δ
Decimal : 236   Hexadecimal : ec        Octal : 354     Character : ∞
Decimal : 237   Hexadecimal : ed        Octal : 355     Character : φ
Decimal : 238   Hexadecimal : ee        Octal : 356     Character : ε
Decimal : 239   Hexadecimal : ef        Octal : 357     Character : ∩
Decimal : 240   Hexadecimal : f0        Octal : 360     Character : ≡
Decimal : 241   Hexadecimal : f1        Octal : 361     Character : ±
Decimal : 242   Hexadecimal : f2        Octal : 362     Character : ≥
Decimal : 243   Hexadecimal : f3        Octal : 363     Character : ≤
Decimal : 244   Hexadecimal : f4        Octal : 364     Character : ⌠
Decimal : 245   Hexadecimal : f5        Octal : 365     Character : ⌡
Decimal : 246   Hexadecimal : f6        Octal : 366     Character : ÷
Decimal : 247   Hexadecimal : f7        Octal : 367     Character : ≈
Decimal : 248   Hexadecimal : f8        Octal : 370     Character : °
Decimal : 249   Hexadecimal : f9        Octal : 371     Character : ∙
Decimal : 250   Hexadecimal : fa        Octal : 372     Character : ·
Decimal : 251   Hexadecimal : fb        Octal : 373     Character : √
Decimal : 252   Hexadecimal : fc        Octal : 374     Character : ⁿ
Decimal : 253   Hexadecimal : fd        Octal : 375     Character : ²
Decimal : 254   Hexadecimal : fe        Octal : 376     Character : ■
Decimal : 255   Hexadecimal : ff        Octal : 377     Character :  
*/