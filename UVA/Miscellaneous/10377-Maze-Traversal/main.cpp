#include <iostream>

using namespace std;

int main()
{
  int count;
  bool maze[60][60];
  int rowN, colN;

  char curr;

  //robot variables
  int direction = 0; //(0,N),(1,E),(2,S),(3,W)
  int rowPos, colPos;

  cin >> count;

  for(;count > 0; count--)
  {
    cin>>rowN; cin>>colN;
    for(int i = 0; i < rowN; i++)
    {
      for(int j = 0; j < colN; j++)
      {
        cin >> curr;
        if(curr == ' ')
          maze[i][j] = true;
        else
          maze[i][j] = false;
      }
    }
    cin >> rowPos; cin >> colN;
    curr = ' ';
    while(curr != 'Q' && curr != 'q')
    {
      cin >> curr;
      switch (curr) {
        case 'R':
        case 'r':
          direction = (direction + 1) % 4;
          break;
        case 'L':
        case 'l':
          direction = (direction - 1) % 4;
          break;
        case 'F':
        case 'f':
          switch (direction) {
            case 0: //N
              if(rowPos - 1 > 0)
                rowPos--;
              break;
            case 1: //E
              if(colPos + 1 < colN)
                colPos++;
              break;
            case 2: //S
              if(rowPos + 1 < rowN)
                rowPos++;
              break;
            case 3: //W
              if(colPos - 1 > 0)
                colPos--;
              break;
            default:
              continue;
          }
      }
    }
    cout << rowPos << " "<< colPos << " ";

    switch (direction) {
      case 0: //N
        curr = 'N';
        break;
      case 1: //E
        curr = 'E';
        break;
      case 2: //S
        curr = 'S';
        break;
      case 3: //W
        curr = 'W';
        break;
      default:
        continue;
    }

    cout << curr << endl;
  }
}
