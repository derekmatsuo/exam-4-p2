#include<iostream>
#include<iomanip>
using namespace std;

int main() {
	//declarations
	int N;
	int totalpointsearned = 0;
	int totalpoints = 0;
	int points;
	int pointsearned;
	char answer;


	//get user input and calculation
	cout << "How many assignents are there?";
	cin >> N;

	for (int i = 0; i < N; i++) {
		cout << "what is the score of assignment" << " " << (i + 1) << "?" << " ";
		cin >> pointsearned;
		cout << "how many points are possible for assignment" << " " << (i + 1) << "?" << " ";
		cin >> points;
		totalpointsearned = pointsearned + totalpointsearned;
		totalpoints = points + totalpoints;
		if (static_cast<double> (pointsearned * 100) / static_cast<double> (points) < 50.0 && static_cast<double> (totalpointsearned * 100) / static_cast<double> (totalpoints) < 70.0) {
			cout << "warning: assignment below 50% and accumlated average is below 70%" << endl;
		}


	}
	//output
	cout << "Your grade is" << " " << setprecision(4) << static_cast<double> (totalpointsearned * 100) / static_cast<double> (totalpoints) << " % ";
	if (static_cast<double> (totalpointsearned * 100) / static_cast<double> (totalpoints) < 60) {
		cout << "Would you like to take a bonus assignment for an extra 5% of your total grade?(Y/N)" << endl;
		cin >> answer;
		cout << "here is your bonus assignment (LINK)" << endl;
	}
	system("pause");
	return 0;
} 