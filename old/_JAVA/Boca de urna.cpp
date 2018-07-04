/*
	- BOCA DE URNA -

	Right now presidential elections are being held in Nlogonia.
	For a candidate to win in the first round, he should obtain more votes than each of the other candidates.
	But that is not enough:
		• he should also obtain at least 45% of all the votes,
		• or at least 40% of all the votes and at least 10% more votes than each of the other candidates.
		• If no candidate wins in the first round, a new election is held as a second round.
		
	Benicio is a political journalist in Nlogonia, and he always wants to scoop everyone else.
	This is why he has collected information from polls,
	and wants to know if according to these one of the candidates will win in the first round,
	or on the contrary there will be a second round. Benicio needs to decide this with haste,
	before someone else scoops him. Can you help him?
	

	INPUT
		The first line contains an integer number N, representing the number of candidates (2 = N = 10).
		The second line contains N integer numbers Vi representing the amount of votes obtained by each of the candidates
		(0 = Vi = 1000 for i = 1, ..., N).
		At least one candidate obtained at least one vote, and there are no two candidates with the same number of votes.
	
	OUTPUT
		Print a line containing a single digit, indicating if there is a winner in the first round or not.
		If there is such a first round winner, the digit must be a '1';
		otherwise (i.e. if there should be a second round) the digit must be '2'.

*/
#include <iostream>
using namespace std;

int i;
int candidates;
int votes[11];
int first;
int second;
int cantVotes;
int main(int argc, char *argv[]) {
	
	// Ask for information
	cout<< "Enter number of candidates. [Between 2 and 10]\n";
	cin>> candidates;
	for (i = 1; i <= candidates; i++){
		cout<< "Enter number of votes of the candidate "<< i <<". [Between 0 and 1000]\n";
		cin>> votes[i];
	}
	
	// Analyze first and second
	for (i = 1; i <= candidates; i++){
		if (votes[i] > votes[first]){
			second = first;
			first = i;
		}
		else if (votes[i] > votes[second])
			second = i;
	}
	
	// Define amount of votes in total
	for (i = 1; i <= candidates; i++)
		cantVotes += votes[i];
	
	// Gives the results
	if (votes [first] >= cantVotes * 0.45)
		cout<< "\nCandidate "<< first<< " won in the first round.\n"
		<<"He obtained at least 45% of all the vote. Congratulations!! :D";
	else if (votes[first] >= cantVotes * 0.4 && votes[first] >= votes[second] * 1.1)
		cout<< "\nCandidate "<< first<< " won in the first round.\n"
		<<"He had at least 40% of all the votes and at least 10% more votes than each of the other candidates :)";
	else
		cout<<"\nNobody's won. There will be a second round.\nGood luck in the next :(";
	
	// Plus. The table of votes
	cout<<"\n\n\nHere's the full table\n\n";
	for (i = 1; i <= candidates; i++)
		cout<< "|| Candidate "<< i<< ": "<< votes[i]<< endl;
	return 0;
}

