#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <windows.h>
using namespace std;

int main()
{
    system("color f0");
    char mat[3][3];
    int x,y,b=2,c;
    bool a=true,d=true;

    for(x=0;x<3;x++){
    for(y=0;y<3;y++){
        mat[x][y]='.';
    }
    }
    cout<<"\n  * *0* | *1* | *2* *\n";
    for(x=0;x<3;x++){
    cout<<"*********************\n"<<x<<" *";
    for(y=0;y<3;y++){
    cout<<"  "<<mat[x][y]<<"  *";
    }
    cout<<"\n";
    }cout<<"*********************\n";
    system("color 1f");
    cout<<"player 1: ";
    cin>>x>>y;
    while((mat[x][y]!='.')||(x<0)||(x>2)||(y<0)||(y>2)){
    if((x<0)||(x>2)||(y<0)||(y>2)){
    cout<<"value doesn't exict! rechose new one: ";
    }
    else{
    cout<<"sorry position already token, chose a new one: ";
     }
     cin>>x>>y;
    }
    mat[x][y]='x';
    system("CLS");
        cout<<"\n  * *0* | *1* | *2* *\n";
    for(x=0;x<3;x++){
    cout<<"*********************\n"<<x<<" *";
    for(y=0;y<3;y++){
    cout<<"  "<<mat[x][y]<<"  *";
    }
    cout<<"\n";
    }cout<<"*********************\n";
    system("color 4f");
    cout<<"player 2: ";
    cin>>x>>y;
    while((mat[x][y]!='.')||(x<0)||(x>2)||(y<0)||(y>2)){
    if((x<0)||(x>2)||(y<0)||(y>2)){
    cout<<"value doesn't exict! rechose new one: ";
    }
    else{
    cout<<"sorry position already token, chose a new one: ";
     }
     cin>>x>>y;
    }
    mat[x][y]='o';

    while(a && b<9){
while(a && d && b<9){
    system("CLS");
    cout<<"\n  * *0* | *1* | *2* *\n";
    for(x=0;x<3;x++){
    cout<<"*********************\n"<<x<<" *";
    for(y=0;y<3;y++){
    cout<<"  "<<mat[x][y]<<"  *";
    }
    cout<<"\n";
    }cout<<"*********************\n";
            /***** player1 turn *****/
    system("color 1f");
    cout<<"player 1: ";
    cin>>x>>y;

    while((mat[x][y]!='.')||(x<0)||(x>2)||(y<0)||(y>2)){
    if((x<0)||(x>2)||(y<0)||(y>2)){
    cout<<"value doesn't exict! rechose new one: ";
    }
    else{
    cout<<"sorry position already token, chose a new one: ";
     }
     cin>>x>>y;
    }
    mat[x][y]='x';
    if((mat[0][y]==mat[1][y] && mat[0][y]==mat[2][y]) || (mat[x][0]==mat[x][1] && mat[x][0]==mat[x][2]) || (mat[0][0]==mat[1][1] && mat[0][0]==mat[2][2]) || (mat[2][0]==mat[1][1] && mat[2][0]==mat[0][2])){
        c=1;
        a=false;
    }
    d=false;
    b=b+1;
    }
    d=true;

    while(a && d && b<9){
    system("CLS");
    cout<<"\n  * *0* | *1* | *2* *\n";
    for(x=0;x<3;x++){
    cout<<"*********************\n"<<x<<" *";
    for(y=0;y<3;y++){
    cout<<"  "<<mat[x][y]<<"  *";
    }
    cout<<"\n";
    }cout<<"*********************\n";

    /****** player 2****/
    system("color 4f");
    cout<<"player 2: ";
    cin>>x>>y;

    while((mat[x][y]!='.')||(x<0)||(x>2)||(y<0)||(y>2)){
    if((x<0)||(x>2)||(y<0)||(y>2)){
    cout<<"value doesn't exict! rechose new one: ";
    }
    else{
    cout<<"sorry position already token, chose a new one: ";
     }
     cin>>x>>y;
    }
    mat[x][y]='o';
        if((mat[0][y]==mat[1][y] && mat[0][y]==mat[2][y]) || (mat[x][0]==mat[x][1] && mat[x][0]==mat[x][2]) || (mat[0][0]==mat[1][1] && mat[0][0]==mat[2][2]) || (mat[2][0]==mat[1][1] && mat[2][0]==mat[0][2])){
        c=2;
        a=false;
    }
    d=false;
    b=b+1;
    }
    d=true;

    }
system("CLS");
if(b==9){
    cout<<"\n\n   null  \n";
}else{
    if(c==1){
        cout<<"\n\n   player 1 win\n\n";
    }
    else{
        cout<<"\n\n   player 2 win\n\n";
    }}
    Sleep(2000);
    return 0;
}
