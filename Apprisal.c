#include"basic.h"
#include"box.h"
#include"reg.h"
#include"choice.h"

int main()
{	
//    0 = Black       8 = Gray
//    1 = Blue        9 = Light Blue
//    2 = Green       A = Light Green
//    3 = Aqua        B = Light Aqua
//    4 = Red         C = Light Red
//    5 = Purple      D = Light Purple
//    6 = Yellow      E = Light Yellow
//    7 = White       F = Bright White
system("COLOR c0");
getch();
box();
reg();
setjmp(buf);
choice();	


return 0;
}
