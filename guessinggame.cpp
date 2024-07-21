#include <iostream>
#include<ctime>
using namespace std;

int main(){
//Initialize the random number generator

srand(time(0));

int secretno=(rand()%100)+1;
int low =1,high=100,guess,tries=5;
cout<<"I thought of	a number between 1 and 100! Try	to	guess it."<<endl;
    for(int i=0; i<tries; i++){
    cout<<"Range:"<<low<<","<<high<<"; Number of guesses left: "<<tries-i<<endl;
    cout<<"Your guess: ";
    cin>>guess;

if(secretno==guess){
    cout<<"Congrats!You guessed my number in "<<i+1<<" guesses"<<endl;
    return 0;
}
    else if(guess<secretno){
        cout<<"Wrong! My number is bigger"<<endl;
        low=guess+1;
    }
    else{
        cout<<"Wrong! My number is smaller"<<endl;
        high=guess-1;
    }
}   
cout<<"You are out of guesses! My number is "<<secretno<<"."<<endl;
    return 0;

}