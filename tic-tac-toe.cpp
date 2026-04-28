//This is a simple tic-tac-toe game
#include<iostream>
using namespace std;
char board[3][3];
char currentplayer='X';
//initialize the board
void intiboard(){
    char n='1';
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            board[i][j]=n++;
        }
    }
}
void draw(){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<" "<<board[i][j];
            if(j<2) cout<<" | ";
        }
        cout<<endl;
        if(i<2) cout<<"---+---+---";
        cout<<endl;
}
}
//check winner
bool checkwin(){
    for(int i=0;i<3;i++){
        if(board[i][0]==board[i][1] && board[i][1]==board[i][2])
        return true;
        if(board[0][i]==board[1][i] && board[1][i]==board[2][i])
        return true;
    }
    if(board[0][0]==board[1][1] && board[1][1]==board[2][2])
        return true;
        if(board[0][2]==board[1][1] && board[1][1]==board[2][0])
        return true;
        
        return false;
}
void play(){
    int move;
    for(int turn=0;turn<9;turn++){
        draw();
        cout<<"Player"<<currentplayer<<", enter your move";
        cin>>move;
        int r=(move-1)/3;
        int c=(move-1)%3;
        if(move<1 || move>9 || board[r][c]=='X' || board[r][c]=='O'){
            cout<<"Invalid input.Try again!!!";
            turn--;
        continue;
        }
        board[r][c]=currentplayer;
        if(checkwin()){
            draw();
            cout<<"Player"<<currentplayer<<"wins!!!!!!!"<<endl;
            return;
        }
        currentplayer=(currentplayer=='X')?'O':'X';
         }
         
         cout<<"its a draw";
}
int main(){
    intiboard();
    play();
    return 0;
}
