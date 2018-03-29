// Project Ex 1

#define MAX 30
void main(){
	int score[MAX], marks[MAX];
	int statistics[6];

	input_scores(scores);    //pointers used here
	evaluation(scores, marks);
	classification(marks, statistics);
	output_results(marks, statistics);
}
