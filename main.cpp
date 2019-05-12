#include <iostream>

using namespace std;
char val;
char player='X';
char arr[]={'1','2','3','4','5','6','7','8','9'};
void print()
{
    system("cls");

    cout<<"     "<<"|"<<"     "<<"|"<<"     "<<endl;
    cout<<"  "<<arr[0]<<"  |  "<<arr[1]<<"  |  "<<arr[2]<<endl;
    cout<<"_____|_____ |_____"<<endl;
    cout<<"     "<<"|"<<"     "<<"|"<<"     "<<endl;
    cout<<"  "<<arr[3]<<"  |  "<<arr[4]<<"  |  "<<arr[5]<<endl;
    cout<<"_____|_____|_____"<<endl;
    cout<<"     "<<"|"<<"     "<<"|"<<"     "<<endl;
    cout<<"  "<<arr[6]<<"  |  "<<arr[7]<<"  |  "<<arr[8]<<endl;
    cout<<"     |     |     "<<endl;

    cout<<endl;
    cout<<"********************"<<endl;

}

void input()
{

    if(player==val)
        cout<<"Player 1 turn:"<<endl;
    else
    cout<<"Player 2 turn:"<<endl;
    cout<<"Select the number of the box which you want to mark"<<endl;
    int n;
    cin>>n;

    if(n>9||n<1)
    {
        cout<<"Out of Range box selected. Please chjoose again"<<endl;
        input();
        return ;
    }
    if(arr[n-1]=='X'||arr[n-1]=='O')
    {
        cout<<"This position is already marked, choose again"<<endl;
        input();
        return;
    }
    arr[n-1]=char(player);

}

void toggleplayer()
{
    if(player=='X')
        player='O';
    else
        player='X';


}

char wins()
{


    if(arr[0]=='X'&&arr[1]=='X'&&arr[2]=='X')
        return 'X';
    if(arr[3]=='X'&&arr[4]=='X'&&arr[5]=='X')
        return 'X';
    if(arr[6]=='X'&&arr[7]=='X'&&arr[8]=='X')
        return 'X';
    if(arr[0]=='X'&&arr[3]=='X'&&arr[6]=='X')
        return 'X';
    if(arr[1]=='X'&&arr[4]=='X'&&arr[7]=='X')
        return 'X';
    if(arr[2]=='X'&&arr[5]=='X'&&arr[8]=='X')
        return 'X';
    if(arr[0]=='X'&&arr[4]=='X'&&arr[8]=='X')
        return 'X';
    if(arr[2]=='X'&&arr[4]=='X'&&arr[6]=='X')
        return 'X';


     if(arr[0]=='O'&&arr[1]=='O'&&arr[2]=='O')
        return 'O';
    if(arr[3]=='O'&&arr[4]=='O'&&arr[5]=='O')
        return 'O';
    if(arr[6]=='O'&&arr[7]=='O'&&arr[8]=='O')
        return 'O';
    if(arr[0]=='O'&&arr[3]=='O'&&arr[6]=='O')
        return 'O';
    if(arr[1]=='O'&&arr[4]=='O'&&arr[7]=='O')
        return 'O';
    if(arr[2]=='O'&&arr[5]=='O'&&arr[8]=='O')
        return 'O';
    if(arr[0]=='O'&&arr[4]=='O'&&arr[8]=='O')
        return 'O';
    if(arr[2]=='O'&&arr[4]=='O'&&arr[6]=='O')
        return 'O';

    if(arr[0]!='1'&&arr[1]!='2'&&arr[2]!='3'&&arr[3]!='4'&&arr[4]!='5'&&arr[5]!='6'&&arr[6]!='7'&&arr[7]!='8'&&arr[8]!='9')
        return 'd';

        return '/';
}


int main()
{
    cout << "Hello world!" << endl;

    cout<<"TIC TAC TOE GAME"<<endl;
    cout<<"******************"<<endl;
    cout<<"Player 1 choose X or O "<<endl;
   // char val;
    cin>>val;
    if(val=='X')
        player='X';
    else
        player='O';
    print();

    while(1)
    {
        input();
        print();
        if(wins()=='X')
        {
            if(player=='X')
            {
                cout<<"player 1 wins"<<endl;
            }
            else
                cout<<"player 2 wins"<<endl;
           // cout<<"x wins!!"<<endl;
            break;
        }
        else if(wins()=='O')
        {
            if(player=='O')
            {
                cout<<"player 1 wins"<<endl;
            }
            else
                cout<<"player 2 wins"<<endl;

            //cout<<"O wins!!"<<endl;
            break;
        }
        else if(wins()=='d')
        {
            cout<<"match drawn"<<endl;
            break;

        }
        toggleplayer();



    }
    return 0;
}
