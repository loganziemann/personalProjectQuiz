//by Logan Ziemann

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main(){
	int points = 0;
	int counter;
	int questionNum = 1;
	string reaction;
	
	cout << "WELCOME TO THE ULTIMATE KOBE BRYANT QUIZ!" << endl << endl;
	
	if(questionNum == 1){
		counter = 5;
		for(bool i=false; i==false;){
			char answer;
			char realAns = 'c';
			
			cout << "(1) What iconic NBA franchise did Kobe Bryant play for? (Choose a letter from below)" << endl;
			cout << "A) Toronto Raptors" << endl << "B) Boston Celtics" << endl << "C) Los Angeles Lakers" << endl;
			cout << "Your answer: ";
			cin >> answer;
			
			if(answer == realAns || answer == toupper(realAns)){
				cout << "Correct! +" << counter << endl << endl;
				points += counter;
				
				questionNum++;
				i = true;
			} else {
				cout << "Wrong! Try again..." << endl << endl;
				counter--;
			}
			
			if(counter == 0){
				cout << "You used up all five chances. +0... The correct answer was " << (char)toupper(realAns) << ". Next question!" << endl << endl;
				questionNum++;
				i = true;
			}
		}
	}
	
	if(questionNum == 2){
	counter = 5;
		for(bool i=false; i==false;){
			char answer;
			char realAns = 't';
			
			cout << "(2) True or false? Kobe Bryant had TWO jersey numbers retired by the Lakers (Type t for true and f for false)" << endl;
			cout << "Your answer: ";
			cin >> answer;
			
			if(answer == realAns || answer == toupper(realAns)){
				cout << "Correct! +" << counter << endl << endl;
				points += counter;
				
				questionNum++;
				i = true;
			} else {
				cout << "Wrong! Try again..." << endl << endl;
				counter--;
			}
			
			if(counter == 0){
				cout << "You used up all five chances. +0... The correct answer was (" << (char)toupper(realAns) << "). Next question!" << endl << endl;
				questionNum++;
				i = true;
			}
		}
	}
	
	if(questionNum == 3){
	counter = 5;
		for(bool i=false; i==false;){
			int answer;
			int realAns = 81;
			
			cout << "(3) What was the most amount of points scored in a game by Kobe Bryant? (enter an integer value)" << endl;
			cout << "Your answer: ";
			cin >> answer;
			
			if(answer == realAns){
				cout << "Correct! +" << counter << endl << endl;
				points += counter;
				
				questionNum++;
				i = true;
			} else {
				cout << "Wrong! Try again..." << endl << endl;
				counter--;
			}
			
			if(counter == 0){
				cout << "You used up all five chances. +0... The correct answer was " << realAns << ". Next question!" << endl << endl;
				questionNum++;
				i = true;
			}
		}
	}
	
	
	cout << "Total Points: " << points << "!" << endl;
	
	if(points == 15){
		cout << "Perfect score! Nicely done." << endl;
		reaction = "perfect ";
	} else if(points <= 5){
		cout << "Did you even try?" << endl;
		reaction = "horrid ";
	} else {
		cout << "Decent score." << endl;
		reaction = "solid ";
	}
	
	cout << "That is a " << reaction << setprecision(4) << ((points/15.0)*100) << "%" << endl;	// displays percentage of score (points / total points) * 100 with a double precision of 4 to truncate after 2 decimals
	
	return 0;
}
