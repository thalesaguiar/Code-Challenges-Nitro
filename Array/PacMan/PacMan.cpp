#include <iostream>
using namespace std;

int main() {


    int sizeboard, score = 0, maxscore = 0;


    cin >> sizeboard;
  
    char board[sizeboard][sizeboard];

    for(int j = 0; j < sizeboard; j++){

        for(int i = 0; i < sizeboard; i++){
        cin >> board[i][j];
        }
    }
    
    for(int j = 0; j < sizeboard; j++){
        if(j % 2 == 0){
            for(int i = 0; i < sizeboard; i++){
                if(board[i][j] == 'o'){
                    score++;
                    if(score > maxscore){
                        maxscore = score;
                    } 
                }
                else if(board[i][j] == 'A'){
                    score = 0;
                }
            }
        }else{
            for(int k = sizeboard; k >= 0; k--){
                if(board[k][j] == 'o'){
                    score++;
                    if(score > maxscore){
                        maxscore = score;
                    } 
                }
                else if(board[k][j] == 'A'){
                    score = 0;
                }                
            }
        }
    }

    cout << maxscore;
  return 0;
}