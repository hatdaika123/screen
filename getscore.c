#define MAX 30 // the same definition here

void input_scores(t *scores)
{
     int i, input = 0;
     
     printf("Enter scores, -1 to end:\n");
     for( i=0; i<MAX && input!=-1; i++){
	printf("%d: ", i+1);
        scanf("%d", &input);
        *(scores+i)=input;
     }
}
