#include <iostream>
#include <cmath>
#include <conio.h>
#include <stdlib.h>

char OriginalMaze[15][15]=
{
'#','#','#','#','#','#','#','#','#','#','#','#','#','#','#',
'#','e',' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',
'#','#','#',' ','#',' ','#','#','#','#','#','#','#',' ','#',
'#',' ','#',' ','#',' ','#','#','#','#','#','#','#',' ','#',
'#',' ','#',' ','#',' ','#','#',' ',' ',' ',' ',' ',' ','#',
'#',' ','#',' ','#',' ','#','#',' ','#',' ','#','#',' ','#',
'#',' ','#',' ','#',' ','#','#',' ','#',' ','#','#',' ','#',
'#',' ','#',' ','#',' ',' ',' ',' ','#',' ','#','#',' ','#',
'#',' ','#',' ','#','#','#',' ','#','#',' ','#','#',' ','#',
'#',' ','#',' ','#','#','#',' ','#','#',' ','#','#',' ','#',
'#',' ','#',' ','#','#','#',' ','#','#',' ',' ','#',' ','#',
'#',' ','#',' ',' ','#','#','#','#','#','#',' ','#',' ','#',
'#',' ','#','#',' ','#','#','#','#','#','#',' ','#',' ','#',
'#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#','s','#',
'#','#','#','#','#','#','#','#','#','#','#','#','#','#','#',
};
char VisionMaze[100][100];
int SizeofMaze=15;
struct xy {int x; int y;};
xy player, startpoint, endpoint;
int VisionDistance = 4;
bool flag=false;
////////////////////////////////////////////////////////////////////////
void preTEST()
{
    for(int i=0;i<SizeofMaze;i++)
    {
        for(int j=0;j<SizeofMaze;j++)
        {
            if(OriginalMaze[i][j]=='s') {startpoint.x=j; startpoint.y=i;}
            if(OriginalMaze[i][j]=='e') {endpoint.x=j; endpoint.y=i;}
        }
    }
    player.x=startpoint.x; player.y=startpoint.y;
}
void synchro()
{
    for(int i=0;i<SizeofMaze;i++)
    {
        for(int j=0;j<SizeofMaze;j++) VisionMaze[i][j]=' ';
    }
    for(int i=0;i<SizeofMaze;i++)
    {
        for(int j=0;j<SizeofMaze;j++) if(sqrt((pow(player.x-j,2))+(pow(player.y-i,2))) <= VisionDistance) VisionMaze[i][j]=OriginalMaze[i][j];
    }
    VisionMaze[player.y][player.x]='p';

    system("cls");

    for(int i=0;i<SizeofMaze;i++)
    {
        for(int j=0;j<SizeofMaze;j++) std::cout<<VisionMaze[i][j];
        std::cout<<" "<<std::endl;
    }
}
void Goandshow(char a)
{
    if(a==119)
    {
        if(OriginalMaze[player.y-1][player.x]!='#') player.y-=1;
        synchro();
    }
    else if(a==97)
    {
        if(OriginalMaze[player.y][player.x-1]!='#') player.x-=1;
        synchro();
    }
    else if(a==115)
    {
        if(OriginalMaze[player.y+1][player.x]!='#') player.y+=1;
        synchro();
    }
    else if(a==100)
    {
        if(OriginalMaze[player.y][player.x+1]!='#') player.x+=1;
        synchro();
    }

}
void check()
{
    if(player.x==endpoint.x&&player.y==endpoint.y) flag=true;
}
int getCommand()
{
    if(_kbhit()) {
        return _getch();
    }

    return -1;
}
//////////////////////////////////////////////////////////////////////////
int main()
{
    preTEST();
    synchro();

    for(;;)
    {
        Goandshow(getCommand());
        check();
        if(flag==true) break;
    }
    std::cout<<"end!";
}