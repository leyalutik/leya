#include "tests.h"

/*
Examples
......... 		Nobody	
XOOOXXXXO	Nobody
XO.OX...X	Petya_won.
XO.OX.O.X	Incorrect
.OX.X.XO.	Petya_won.
.X.OX.OX.	Petya_won.
O.X.OX..X	Petya_won.
XO.XO.X..	Petya_won.
OO.XXX...	Petya_won.
XXXOO....	Petya_won.
....OOXXX	Petya_won.
OOX.X.XO.	Incorrect
.X.OXOOX.	Incorrect
O.XOOX..X	Incorrect
XO.XO.X.O	Incorrect
OOOXXX...	Incorrect
XXXOOO...	Incorrect
..OOOXXX	Incorrect
O.XOX.O.X	Vanya_won.
XO.XO..OX	Vanya_won.
X.OXXO..O	Vanya_won.
OX.XO..XO	Vanya_won.
X.O.OXOX.	Vanya_won.
OOO.X.XX.	Vanya_won.
X..OOOX.X	Vanya_won.
XX..X.OOO	Vanya_won.
O.XOXO.X	Incorrect
XOXXO..OX	Incorrect
X.OXXOX.O	Incorrect
OX.XOX.XO	Incorrect
X.OXOXOX.	Incorrect
OOOXX.XX.	Incorrect
X..OOOXXX	Incorrect
XX.XX.OOO	Incorrect
XOXOXOXOXO	Incorrect
.OX...XO.		Nobody
.X.O..OX.		Nobody
O.X.O...X		Nobody
XO.XO....		Nobody
OO.XX....		Nobody
XX.OO....		Nobody
....OOXX.		Nobody
O.XOX...X	Nobody
XO.XO...X	Nobody
X.OXX...O	Nobody
OX.XO..X.	Nobody
X.O.OX.X.	Nobody
OO..X.XX.	Nobody
X...OOX.X	Nobody
XX..X..OO	Nobody
.........		Nobody
xOoXXXOOO	Incorrect
X.OOXXOOX	Incorrect
X........		Nobody
XO.......		Nobody
...XOX...		Nobody
...XOXO..		Nobody
O........		Incorrect
X.......X		Incorrect
OX......O		Incorrect
XX.OX....		Incorrect
O..XOXO.O	Incorrect
XOXOXOXOO	Incorrect


Сделать вариации из выше примеров Incorrect
Несколько символов
*/

void test_analyze_game()
{
 AssertEqual(analyze_game("........."),"Nobody","1");
 AssertEqual(analyze_game("XOOOXXXXO"),"Nobody","2");
 AssertEqual(analyze_game("XO.OX...X"),"Petya_won.","3");
 AssertEqual(analyze_game("XO.OX.O.X"),"Incorrect","4");
 AssertEqual(analyze_game(".OX.X.XO."),"Petya_won.","5");
 AssertEqual(analyze_game(".X.OX.OX."),"Petya_won.","6");
AssertEqual(analyze_game("O.X.OX..X"),"Petya_won.","7");
 AssertEqual(analyze_game("XO.XO.X.."),"Petya_won.","8");
 AssertEqual(analyze_game("OO.XXX..."),"Petya_won.","9");
 AssertEqual(analyze_game("XXXOO...."),"Petya_won.","10");
 AssertEqual(analyze_game("....OOXXX"),"Petya_won.","11");
 AssertEqual(analyze_game("OOX.X.XO."),"Incorrect","12");
 AssertEqual(analyze_game(".X.OXOOX."),"Incorrect","13");
 AssertEqual(analyze_game("O.XOOX..X"),"Incorrect","14");
 AssertEqual(analyze_game("XO.XO.X.O"),"Incorrect","15");
 AssertEqual(analyze_game("OOOXXX..."),"Incorrect","16");
 AssertEqual(analyze_game("XXXOOO..."),"Incorrect","17");
 AssertEqual(analyze_game("..OOOXXX"),"Incorrect","18");
 AssertEqual(analyze_game("O.XOX.O.X"),"Vanya_won.","19");
 AssertEqual(analyze_game("XO.XO..OX"),"Vanya_won.","20");
 AssertEqual(analyze_game("X.OXXO..O"),"Vanya_won.","21");
 AssertEqual(analyze_game("OX.XO..XO"),"Vanya_won.","22");
 AssertEqual(analyze_game("X.O.OXOX."),"Vanya_won.","23");
 AssertEqual(analyze_game("OOO.X.XX."),"Vanya_won.","24");
 AssertEqual(analyze_game("X..OOOX.X"),"Vanya_won.","25");
 AssertEqual(analyze_game("XX..X.OOO"),"Vanya_won.","26");
 AssertEqual(analyze_game("O.XOXO.X"),"Incorrect","27");
 AssertEqual(analyze_game("XOXXO..OX"),"Incorrect","28");
 AssertEqual(analyze_game("X.OXXOX.O"),"Incorrect","29");
 AssertEqual(analyze_game("OX.XOX.XO"),"Incorrect","30");
 AssertEqual(analyze_game("X.OXOXOX."),"Incorrect","31");
 AssertEqual(analyze_game("OOOXX.XX."),"Incorrect","32");
 AssertEqual(analyze_game("X..OOOXXX"),"Incorrect","33");
 AssertEqual(analyze_game("XX.XX.OOO"),"Incorrect","34");
 AssertEqual(analyze_game("XOXOXOXOXO"),"Incorrect","35");
 AssertEqual(analyze_game(".OX...XO."),"Nobody","36");
 AssertEqual(analyze_game(".X.O..OX."),"Nobody","37");
 AssertEqual(analyze_game("O.X.O...X"),"Nobody","38");
 AssertEqual(analyze_game("XO.XO...."),"Nobody","39");
 AssertEqual(analyze_game("OO.XX...."),"Nobody","40");
 AssertEqual(analyze_game("XX.OO...."),"Nobody","41");
 AssertEqual(analyze_game("....OOXX."),"Nobody","42");
 AssertEqual(analyze_game("O.XOX...X"),"Nobody","43");
 AssertEqual(analyze_game("XO.XO...X"),"Nobody","44");
 AssertEqual(analyze_game("X.OXX...O"),"Nobody","45");
 AssertEqual(analyze_game("OX.XO..X."),"Nobody","46");
 AssertEqual(analyze_game("X.O.OX.X."),"Nobody","47");
 AssertEqual(analyze_game("OO..X.XX."),"Nobody","48");
 AssertEqual(analyze_game("X...OOX.X"),"Nobody","49");
 AssertEqual(analyze_game("XX..X..OO"),"Nobody","50");
 AssertEqual(analyze_game("........."),"Nobody","51");
 AssertEqual(analyze_game("XOoXXXOOO"),"Incorrect","52");
 AssertEqual(analyze_game("X.OOXXOOX"),"Incorrect","53");
 AssertEqual(analyze_game("X........"),"Nobody","54");
 AssertEqual(analyze_game("XO......."),"Nobody","55");
 AssertEqual(analyze_game("...XOX..."),"Nobody","56");
 AssertEqual(analyze_game("...XOXO.."),"Nobody","57");
 AssertEqual(analyze_game("O........"),"Incorrect","58");
 AssertEqual(analyze_game("X.......X"),"Incorrect","59");
 AssertEqual(analyze_game("OX......O"),"Incorrect","60");
 AssertEqual(analyze_game("XX.OX...."),"Incorrect","61");
 AssertEqual(analyze_game("O..XOXO.O"),"Incorrect","62");
 AssertEqual(analyze_game("XOXOXOXOO"),"Incorrect","63");
 AssertEqual(analyze_game("X..OXOOOO"),"Incorrect","1");
 AssertEqual(analyze_game("X...X.OO."),"Nobody","2");
 AssertEqual(analyze_game("XXOOOXXOX"),"Nobody","3");
 AssertEqual(analyze_game("XO.XO.X.O"),"Incorrect","4");
 AssertEqual(analyze_game("OX.XOXX.O"),"Incorrect","5");
 AssertEqual(analyze_game("..XOX.X.O"),"Petya_won.","6");
 AssertEqual(analyze_game("O........"),"Incorrect","7"); 
}
