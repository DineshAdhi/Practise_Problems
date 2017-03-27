#include<iostream>
#include<string>
using namespace std;

string dummyBoard[8][8];

int selectedX, selectedY;

void printBoard(string **board)
{
  cout<<"\n\n\n\n\n";
  int i,j;
  cout<<"\t\t\t";
  for(i=0;i<8;i++)
    cout<<i<<"       ";

  cout<<"\n\n\n\n";

  for(i=0;i<8;i++)
  {
    cout<<"\t"<<i<<"\t\t";
    for(j=0;j<8;j++)
    {
      cout<<board[i][j]<<"     ";
    }
    cout<<"\n\n\n";
  }

  cout<<"\n\n\n";
}

void makeBoard(string **board)
{
  int i,j;

    for(i=0;i<8;i++)
      for(j=0;j<8;j++)
          board[i][j]="*  ";

  board[7][0] = "1C1";
  board[7][1] = "1H1";
  board[7][2] = "1B1";
  board[7][3] = "1Q";
  board[7][4] = "1K";
  board[7][5] = "1B2";
  board[7][6] = "1H2";
  board[7][7] = "1C2";


  board[0][0] = "2C1";
  board[0][1] = "2H1";
  board[0][2] = "2B1";
  board[0][3] = "2Q";
  board[0][4] = "2K";
  board[0][5] = "2B2";
  board[0][6] = "2H2";
  board[0][7] = "2C2";

  for(i=0;i<8;i++)
  {
    board[6][i] = "1S" + to_string(i+1);
  }

  for(i=0;i<8;i++)
  {
    board[1][i] = "2S" + to_string(i+1);
  }
}

int getXYPosition(string **board, string selectedPiece, int *x, int *y)
{
  int i,j;
  for(i=0;i<8;i++)
    for(j=0;j<8;j++)
    {
      if(board[i][j]==selectedPiece)
      {
        *x=i; *y=j;
        selectedX=*x;
        selectedY=*y;
        return 1;
      }
    }

  cout<<"  Wrong Selection \n";

  return 0;
}

void printDummyBoard(string dummyBoard[8][8])
{
  int i,j;
  cout<<"\t\t\t";

  cout<<"All possible moves for your selection \n\n\n";

  cout<<"\t\t\t";

  for(i=0;i<8;i++)
    cout<<i<<"       ";
  cout<<"\n\n\n";

  for(i=0; i<8; i++)
  {
    cout<<"\t"<<i<<"\t\t";
    for(j=0; j<8;j++)
    {
      cout<<dummyBoard[i][j]<<"     ";
    }
    cout<<"\n\n\n";
  }
}

void plotCastle(string dummyBoard[8][8], int x, int y)
{
  int i=1;

  while(x+i>=0 && x+i<=7 && dummyBoard[x+i][y]=="*  ")
  {
    dummyBoard[x+i][y]="/  ";
    i++;
  }

  i=1;

  while(x-i>=0 && x-i<=7 && dummyBoard[x-i][y]=="*  ")
  {
    dummyBoard[x-i][y]="/  ";
    i++;
  }

  i=1;

  while(y+i>=0 && y+i<=7 && dummyBoard[x][y+i]=="*  ")
  {
    dummyBoard[x][y+i]="/  ";
    i++;
  }

  i=1;

  while(y-i>=0 && y-i<=7 && dummyBoard[x][y-i]=="*  ")
  {
    dummyBoard[x][y-i]="/  ";
    i++;
  }

  printDummyBoard(dummyBoard);
}

void plotSoldier(string dummyBoard[8][8], int x, int y)
{
  if(x-1<=7 && x-1>=0 && dummyBoard[x-1][y]=="*  ")
  {
    dummyBoard[x-1][y]="/  ";
  }

  printDummyBoard(dummyBoard);
}

void plotQueen(string dummyBoard[8][8], int x, int y)
{
  int i=1;

  while(x+i>=0 && x+i<=7 && dummyBoard[x+i][y][0]!='1')
  {
    if(dummyBoard[x+i][y]=="*  ")
      dummyBoard[x+i][y]="/  ";
    else if(dummyBoard[x+i][y][0]=='2')
    {
      dummyBoard[x+i][y]="/"+dummyBoard[x+i][y]; break;
    }
    i++;
  }

  i=1;

  while(x-i>=0 && x-i<=7 && dummyBoard[x-i][y][0]!='1')
  {
    if(dummyBoard[x-i][y]=="*  ")
      dummyBoard[x-i][y]="/  ";
    else if(dummyBoard[x-i][y][0]=='2')
    {
      dummyBoard[x-i][y]="/"+dummyBoard[x-i][y]; break;
    }
    i++;
  }

  i=1;

  while(y+i>=0 && y+i<=7 && dummyBoard[x][y+i][0]!='1')
  {
    if(dummyBoard[x][y+i]=="*  ")
      dummyBoard[x][y+i]="/  ";
    else if(dummyBoard[x][y+i][0]=='2')
    {
      dummyBoard[x][y+i]="/"+dummyBoard[x][y+i]; break;
    }

    i++;
  }

  i=1;

  while(y-i>=0 && y-i<=7 && dummyBoard[x][y-i][0]!='1')
  {
    if(dummyBoard[x][y-i]=="*  ")
      dummyBoard[x][y-i]="/  ";
    else if(dummyBoard[x][y-i][0]=='2')
    {
      dummyBoard[x][y-i]="/"+dummyBoard[x][y-i];
      break;
    }

    i++;
  }

  i=1;

  while(x+i>=0 && y+i>=0 && x+i<=7 && y+i<=7 && dummyBoard[x+i][y+i][0]!='1')
  {
    if(dummyBoard[x+i][y+i]=="*  ")
      dummyBoard[x+i][y+i]="/  ";
    else if(dummyBoard[x+i][y+i][0]=='2')
    {
      dummyBoard[x+i][y+i]="/"+dummyBoard[x+i][y+i];
      break;
    }
    i++;
  }

  i=1;

  while(x+i>=0 && y-i>=0 && x+i<=7 && y-i<=7 && dummyBoard[x+i][y-i][0]!='1')
  {
    if(dummyBoard[x+i][y-i]=="*  ")
      dummyBoard[x+i][y-i]="/  ";
    else if(dummyBoard[x+i][y-i][0]=='2')
    {
      dummyBoard[x+i][y-i]="/"+dummyBoard[x+i][y-i];
      break;
    }
    i++;
  }

  i=1;

  while(x-i>=0 && y-i>=0 && x-i<=7 && y-i<=7 && dummyBoard[x-i][y-i][0]!='1')
  {
    if(dummyBoard[x-i][y-i]=="*  ")
      dummyBoard[x-i][y-i]="/  ";
    else if(dummyBoard[x-i][y-i][0]=='2')
    {
      dummyBoard[x-i][y-i]="/"+dummyBoard[x-i][y-i];
      break;
    }
    i++;
  }

  i=1;

  while(x-i>=0 && y+i>=0 && x-i<=7 && y+i<=7 && dummyBoard[x-i][y+i][0]!='1')
  {
    if(dummyBoard[x-i][y+i]=="*  ")
      dummyBoard[x-i][y+i]="/  ";
    else if(dummyBoard[x-i][y+i][0]=='2')
    {
      dummyBoard[x-i][y+i]="/"+dummyBoard[x-i][y+i];
      break;
    }
    i++;
  }

  printDummyBoard(dummyBoard);

}

void plotHorse(string dummyBoard[8][8], int x, int y)
{

}

void plotBishop(string dummyBoard[8][8], int x, int y)
{
  int i=1;

  while(x+i>=0 && y+i>=0 && x+i<=7 && y+i<=7)
  {
    if(dummyBoard[x+i][y+i]=="*  ")
      dummyBoard[x+i][y+i]="/  ";
    else if(dummyBoard[x+i][y+i][1]=='2')
      dummyBoard[x+i][y+i]="/"+dummyBoard[x+i][y+i];
    i++;
  }

  i=1;

  while(x+i>=0 && y-i>=0 && x+i<=7 && y-i<=7)
  {
    if(dummyBoard[x+i][y-i]=="*  ")
      dummyBoard[x+i][y-i]="/  ";
    else if(dummyBoard[x+i][y-i][1]=='2')
      dummyBoard[x+i][y-i]="/"+dummyBoard[x+i][y-i];
    i++;
  }

  i=1;

  while(x-i>=0 && y-i>=0 && x-i<=7 && y-i<=7)
  {
    if(dummyBoard[x-i][y-i]=="*  ")
      dummyBoard[x-i][y-i]="/  ";
    else if(dummyBoard[x-i][y-i][1]=='2')
      dummyBoard[x-i][y-i]="/"+dummyBoard[x-i][y-i];
    i++;
  }

  i=1;

  while(x-i>=0 && y+i>=0 && x-i<=7 && y+i<=7)
  {
    if(dummyBoard[x-i][y+i]=="*  ")
      dummyBoard[x-i][y+i]="/  ";
    else if(dummyBoard[x-i][y+i][1]=='2')
      dummyBoard[x-i][y+i]="/"+dummyBoard[x-i][y+i];
    i++;
  }


  printDummyBoard(dummyBoard);

}

void plotKing(string dummyBoard[8][8], int x, int y)
{

}



int ploatBoard(string **board, string selectedPiece)
{
  int x,y,i,j;
  if(getXYPosition(board, selectedPiece, &x, &y)==0)
    return 0;

  cout<<"\n You have selected "<<selectedPiece<<" from location ("<<x<<","<<y<<")\n\n";


  for(i=0;i<8;i++)
    for(j=0;j<8;j++)
      dummyBoard[i][j] = board[i][j];

  switch(dummyBoard[x][y][1])
  {
    case 'C':
      plotCastle(dummyBoard,x,y);
      break;

    case 'H':
      plotHorse(dummyBoard,x,y);
      break;

    case 'B':
      plotBishop(dummyBoard,x,y);
      break;

    case 'K':
      plotKing(dummyBoard,x,y);
      break;

    case 'Q':
      plotQueen(dummyBoard,x,y);
      break;

    case 'S':
      plotSoldier(dummyBoard,x,y);
  }

  return 1;
}

void movePiece(string **board, int x, int y)
{
  int i,j;

  if(dummyBoard[x][y][0]!='/')
  {
    printf("\n\n Sorry you can't move that piece to that position"); return;
  }

  dummyBoard[x][y]=dummyBoard[selectedX][selectedY];

  dummyBoard[selectedX][selectedY] ="*  ";

  for(i=0;i<8;i++)
    for(j=0;j<8;j++)
    {
      if(dummyBoard[i][j]=="/  ")
        dummyBoard[i][j]="*  ";
    }

  for(i=0;i<8;i++)
    for(j=0;j<8;j++)
      board[i][j] = dummyBoard[i][j];

  printBoard(board);
}

int main()
{
  int i;
  string **board;
  board=new string*[8];

  for(i=0;i<8;i++)
    board[i]= new string[8];

  makeBoard(board);
  printBoard(board);

  while(true)
  {
    string selectedPiece;
    printf("\n Select the chess piece to move : ");
    cin>>selectedPiece;

    if(selectedPiece=="q" || selectedPiece=="Q")
      break;

    if(ploatBoard(board, selectedPiece)==0)
      continue;

    int x,y;

    cout<<"\n\n Please enter the co-ordinates to move the piece <(-1,-1) to quit>: "; cin>>x>>y;

    if(x==-1 || y==-1)
      continue;

    movePiece(board, x,y);

  }
}
