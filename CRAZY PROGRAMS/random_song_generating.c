# include <stdio.h>
# include <stdlib.h>
# include <time.h>

#define NUM_NOTES 8
#define NUM_OCTAVES 5
#define MIN_DURATION 1
#define MAX_DURATION 4

const char *notes[] = {"C","D","E","F","G","A","B","C"};
int main (void){
    int i;
    srand(time(NULL));

    for(i = 0; i < 32;i++)
    {
        int note = rand() % NUM_NOTES;
        int octave = rand() % NUM_OCTAVES + 1;
        int duration = MIN_DURATION + rand() % (MAX_DURATION - MIN_DURATION + 1);
        
        printf("%s%d %d\n",notes[note],octave,duration);
    }
    return 0;
}